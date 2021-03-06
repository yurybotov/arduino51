## О Nuvotion n76e003

Очень простой x51 копеечный микроконтроллер, делался китайцами как замена stm8s003, а потому во многом на него похож... даже расположением выводов. В папке extra можно найти программатор под windows (можете поискать более свежий на сайте производителя), даташит и примеры для голого SDCC.

В отличие от stm8s003 имеет второй UART, лишнюю свободную ногу (можно считать даже 2), в 2 раза больше FLASH (EEPROM разшарен с FLASH), больше (8) каналов ADC [0...4095], и PWM с собственным таймером [0...2047].

- 18 кБайт FLASH, из них до 4 кБайт можно выделить под загрузчик

- 1024 байт RAM, из них 256 байт стандартная память 51, а 768 байта - типа внешняя

- тактовая частота до 16 МГц (можно без внешнего кварца)

- 18 ног для использования (считая Reset который можно назначить просто портом)

- на 8х ногах ADC, очень даже неплохой - [0-4096]

- на 6х ногах PWM, тоже ничего, [0-2048], у PWM собственный таймер и можно задать приличную скорость

- 3 стандартных x51 таймера T0,T1,T2 + T3 - копия T2.

- 2 UART, стандартные x51

- есть SPI до 8 МГц

- есть I2C - проверил, работает на 1 МГц

- питается от 3.3 вольт. Выводы толерантны к 5В.

- прерывания, браун-оут, вэйк-ап, вотч-дог, и так далее

- минимальная обвеска при подключении: резистор и конденсатор на ресете.

Прошивается с помощью программатора NuLink - недорогого, и их полно на Ali. Замечен глюк, который при подключенном программаторе перезагружает контроллер, выполняющий свою программу. Так что, в программе программатора, надо нажимать после загрузки Disconnect.
В общем ничего особенного. Просто рабочая лошадка. Для поделок вполне сойдет.

## Реализация

Библиотека подразумевает работу контроллера от встроенного генератора без внешнего кварца с частотой 16MHz.


### Пины

**Поскольку пины микросхемы никак не связаны с со стандартными раскладками плат Ардуино, пришлось использовать альтернативное наименование для них. Так для пинов используется вид `D{номер порта}{номер бита}`.**

Поддерживаются функции:

`void pinMode(byte PIN, byte mode)` - установить режим пина, `mode` может иметь значения:

`INPUT` - вход с высоким импедансом

`OUTPUT` - аналог PUSHPULL

`PUSHPULL` - выход с двухтактным каскадом

`BIDIRECTIONAL` - стандартный для x51 вариант: выход без подтяжки, при записи в него единицы можно использовать его как вход

`ADC` - аналоговый вход

`PWM` - псевдо-аналоговый PWM выход

`byte digitalRead(byte PIN)` - прочитать значение пина (0/1), читается не то что было записано в порт, а реальное состояние вывода

`void digitalWrite(byte PIN, byte value)` - записать значение `value` (0/1) в пин

Как и в Ардуино можно использовать как значение:

`HIGH` = 1

`LOW` = 0

`word analogRead(byte PIN)` - прочитать аналоговое значение с ADC. Естественно это возможно только на тех ногах на которых он доступен: `D17, D30, D07, D06, D05, D04, D03`. Необходимо предварительно использовать `pinMode(Dxx,ADC)`. Диапазон преобразования [0...Vcc] -> `[0..4095]`.

`void analogWrite(byte PIN, word value)` - установить значение PWM. Допустимо только для тех ног которые поддерживают PWM: `D12, D14, D11, D10, D05, D04, D00, D01, D15, D03`. **Важно: число каналов PWM меньше чем число выводов, некоторые выводы нельзя использовать для PWM одновременно: D14 и D11, D10 и D05, D04 и D00, D15 и D03.** Для инициализации необходимо использовать `pinMode(Dxx, PWM)`. Частота PWM установлена примерно в `2кГц`, диапазон уровней `[0..2047]` -> [0..Vcc].


### Прерывания на пинах

Контроллер умеет обрабатывать до 8 прерываний на пинах **НО все они должны принадлежать одному номеру порта**. Реально у контроллера только два порта 0 и 1 имеют по 8 выводов, у 2 и 3 портов всего по одному выводу (D20,D30). Так что используйте либо **все D0x** либо **все D1x**. Не стоит делать внутри прерывания сложных вычислений и уж тем более не стоит использовать `delay()` в том числе и для подавления `звона`. Устанавливайте флаги, которые будут проверяться в основном цикле программы. Конфигурируются прерывания подобно Ардуино, но режимы имеют несколько измененные имена:

`void attachInterrupt(byte pin, void (*isr)(void), enum InterruptMode mode)` - установить прерывание на пин, isr - имя функции обработчика, режимы mode могут быть:

`LOW_LEVEL` - по низкому уровню на входе

`HIGH_LEVEL` - по высокому уровню на входе

`FALLING_EDGE` - по падающему фронту на входе

`RISING_EDGE` - по растущему фронту на входе

`CHANGE_EDGE` - по обеим фронтам

`void detachInterrupt(byte pin)` - прекратить обработку прерываний от пина


### Функции времени

Библиотека использует `Timer0` для `delay()`, `millis()`, `micros()` и других функций связанных с временем. Минимальный квант времени 10 мкс. `Timer1` используется для работы `UART0 (Serial0)`, а `Timer3` для `UART1 (Serial1)`. `Timer2` - свободен.

Итак поддерживаются:

`dword millis()` - возвращает системное время в миллисекундах

`dword micros()` - возвращает системное время в микросекундах (с шагом 10 микросекунд) 

`void delay(dword time)` - останавливает выполнение программы на time миллисекунд

`void delayMicroseconds(dword time)` - останавливает выполнение на time микросекунд

`dword pulseIn(byte pin, bool value, dword timeOut)` - возвращает "ширину импульса" в миллисекундах - от начала своего выполнения до момента когда пин pin примет значение value. Если это не произошло за время timeOut возвращает время timeOut. Вариант функции без timeOut не реализован.  


### Serial

Имеются `Serial0` и `Serial1` на UART0 и UART1 соответственно. Передача ведется синхронно, прием ассинхронно, по прерыванию данные помещаются в буфер.

**Важно! У обеих Serial и у I2C мастер - общий приемный буфер. По умолчанию 128 байт на всех. Идея это достаточно дурацкая, но пока себя оправдывает.**

Максимальная поддерживаемая скорость передачи через `Serial0` - `57600`, через `Serial1` - `115200` и вообще точность устанавливаемой скорости у Serial1 выше. Чтобы использовать большие скорости на UART0 нужно использовать внешний кварц на 16600 МГц - это не реализовано.

Итак поддерживаются (символ X соответствует 1 или 2 в зависимости от того какой порт используется):

`void SerialXBegin(dword speed)` - инициализирует UART с указанной скоростью передачи

`void SerialXPutc(byte c)` - посылает байт

`void SerialXPrintf(const byte* format,...)` - посылает форматированную строку, например: `SerialXPrintf("строка формата %d 0x%x\n", var1, var2);`. Поддерживаются модификаторы `%d` - десятичное целое, `%x` - шестнадцатеричное, `%o` - восьмиричное, `%c` - символ, `%s` - строка. Для 8 битных чисел при передаче в строку параметров преобразуйте их к 16 битным - `(int)var8bit`. Для 32 битных чисел есть соответствующие модификаторы: `%ld`,`%lx`,`lo`. Строка может выводится просто как `SerialPrint("строка\n");`. Старайтесь не передавать в `SerialXPrintf` много параметров, стэк в контроллере невелик, лучше вызовите функцию несколько раз.

`byte SerialXRead(void)` - принимает байт (на самом деле достает его из буфера). Всегда проверяйте наличие в буфере прежде чем читать. Если там пусто получите `0`.

`byte SerialXAvailable(void)` - проверяет наличие данных в буфере (возвращает количество ожидающих байт)


### I2C

I2C реализован только в режиме `Master`. Никакие проверки кадра не производятся, обработка ошибок отсутствует. По умолчанию установлена скорость 100КБит/с.

**Важно! У обеих Serial и у I2C мастер - общий приемный буфер. По умолчанию 128 байт на всех. Идея это достаточно дурацкая, но пока себя оправдывает.**

Поддерживаются:

`void I2CBeginMaster()` - инициализирует порт в режиме мастера

`void I2CBeginTransmission(byte address)` - посылает признак старта и адрес Slave устройства

`void I2CEndTransmission(void)` - посылает признак завершения

`void I2CWrite(byte b)` - посылает команду записи байта

`void I2CRequestFrom(byte address, byte quantity, byte stop)` - посылает запрос на получение `quantity` байт с Slave устройства `address`. Получает их и кладет в буфер. Если признак `stop` == 1 то завершает транзакцию.

`byte I2CAvailable()` - проверяет наличие в буфере данных от I2C, возвращает количество ожидающих байт

`byte I2CRead()` - читает байт из буфера

`void I2CSetClock(dword speed)` - устанавливает скорость обмена, она может быть:

`I2C_STANDART`   100кБит/с

`I2C_FAST`       400кБит/с

`I2C_SLOW`        40кБит/с

`I2C_HIGHSPEED`  1МБит/с


### SPI

SPI реализован только в режиме `Master`. Пином `CS` как и в Ардуино необходимо управлять самостоятельно, автоматическое управление им отключено.

Поддерживаеются:

`void SPIBeginTransaction(byte mode)` - включает и настраивает SPI в соответствии с режимом mode. Этот режим формируется следующей функцией.

`byte SPISettings(byte speed, byte msblsb, byte mode)` - возвращает режим для предыдущей функции на основании ряда параметров:

`speed` может принимать значения:

`SPI_SPEED_1M` - 1 МБит/с

`SPI_SPEED_2M` - 2 МБит/с

`SPI_SPEED_4M` - 4 МБит/с

`SPI_SPEED_8M` - 8 МБит/с

`msblsb` может быть:

`SPI_MSBFIRST` - старший бит передается первым

`SPI_LSBFIRST` - младший бит передается первым

`mode` может быть:

`SPI_MODE0`, `SPI_MODE1`, `SPI_MODE2`, `SPI_MODE3` - известные сочетания фронтов и полярности импульсов

`void SPIBegin(void)` - инициализация в режиме по умолчанию. Равноценна `SPIBeginTransaction(SPISettings(SPI_SPEED_1M, SPI_MSBFIRST, SPI_MODE0))`

`void SPIEndTransaction(void)` или `void SPIEnd(void)` - выключает SPI

`byte SPITransfer(byte c)` - посылает и одновременно принимает 1 байт


### EEPROM

На самом деле EEPROM у микросхемы нет и я его эмулирую на ее FLASH. Он не плох. Я отъел последние 128 байт под EEPROM и предпоследние 128 байт по его временную копию - жаба задушила отъедать под это 128 байт RAM, ее и так мало, учтите это. Доступны команды:

`byte EEPROMRead(byte address)` - чтение байта из "EEPROM"

`void EEPROMWrite(byte address, byte c)` - запись байта в "EEPROM", причем это полная копия `EEPROMUpdate(byte address, byte c)`.  Обе команды пишут байт только в случае если он изменился. Обе команды проверяют память и если там пусто (0xff) - просто пишут байт, а если там что то было... тут начинается -> стирается временная страница, туда пишется правильная страница с изменившимся байтом, стирается основная страница памяти, из временной страница копируется в основную - то есть это "долго" и "flash-убивательно". Если будете менять размер EEPROM - не забудьте скорректировать `CODE_SIZE` в `Makefile.include` .


### Разные разности

Как и в Ардуино используется ряд общеупотребимых макросов. Необходимо пользоваться ими с осторожностью, не передавая им в качестве параметров выражения.

`bit(b)` - возвращает байт/слово/двойное слово в котором бит с номером `b` установлен в 1 а остальные 0

`bitClear(x, b)` - записывает 0 в бит с номером `b` в переменную `x`

`bitSet(x, b)` - записывает 1 в бит с номером `b` в переменную `x`

`bitRead(x, b)` - возвращает значение бита с номером `b` из переменной `x`

`bitWrite(x, b, v)` - записывает значение `v` в бит с номером `b` в переменную `x`

`highByte(w)` - возвращает старший байт слова

`lowByte(w)` - возвращает младший байт слова

`abs(x)` -  убирает знак числа

`constrain(v, min, max)` - обрезает число `v` до значения граничного, если оно выходит за границы `min` или `max`

`max(x, y)` - возвращает максимальное из 2 значений

`min(x, y)`- возвращает минимальное из 2 значений

`map(x, in_min, in_max, out_min, out_max)` - пересчитывает значение из одного диапазона в другой

`sq(x)` - возвращает квадрат числа 


## Примеры


### Blink

```c
#include "arduino.h"

void setup() {
    pinMode(D14,OUTPUT);
}

void loop() {
    digitalWrite(D14,HIGH);
    delay(1000);

    digitalWrite(D14,LOW);
    delay(1000);
}
```

### Analog read to serial

```c
#include "arduino.h"

void setup() {
    pinMode(D03,ADC);
    Serial0Begin(9600);
}

void loop() {
    Serial0Printf("D03 = %d\n", analogRead(D03));
    delay(1000);
}
```

### Analog to PWM

```c
#include "arduino.h"

void setup() {
    pinMode(D03,ADC);
    pinMode(D14,PWM);
}

void loop() {
    analogWrite(D14,analogRead(D03));
    delay(10);
}
```

### I2C read from 24c04 EEPROM

```c
#include "arduino.h"

void setup() {    
    Serial0Begin(19200);
    I2CBeginMaster();
    I2CSetClock(I2C_FAST);
}

void loop() {
    I2CBeginTransmission(0x50); // 24c04 address 0x50
    I2CWrite(0);                // read from 0 address
    I2CWrite(0);                //
    I2CRequestFrom(0x50, 32, 1); // read 32 bytes to buffer and close
    I2CEndTransmission();
    while(I2CAvailable()) {     // if i2c data exists in buffer
        Serial0Printf("%c",I2CRead()); // print it
    }
    Serial0Putc('\n');
    delay(1000);
}
```

## Pceudo EEPROM read/write

```c
#include "arduino.h"

dword next;

void setup() {   
    Serial0Begin(19200);
    next = millis() + 500;
}

void loop() {
    if(next < millis()) {
        next = millis() + 500;
        EEPROMWrite(0,'A');
        EEPROMWrite(1,'b');
        EEPROMWrite(2,'c');
        EEPROMWrite(1,'B');
        Serial0Printf("%c%c%c\n",EEPROMRead(0),EEPROMRead(1),EEPROMRead(2));
    }
}
```

## Pin interrupt

```c
#include "arduino.h"

byte state = 0;

void change(void) {
    state = (~state) & 1;
    digitalWrite(D14, state);
}

void setup() {
    pinMode(D14, OUTPUT);
    digitalWrite(D14, state);
    attachInterrupt(D15, change, RISING_EDGE);
}

void loop() {
}
```
