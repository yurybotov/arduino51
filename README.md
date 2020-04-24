## arduino51

Иногда хочется по быстрому что то опробовать на контроллере, но знаний как у ардуинщика, а контроллер какой-то экзотический, например копеечный китайский однотактовый 8051. Вот для этого и сделана данная библиотечка.


## Как этим пользоваться?

Для начала поставить SDCC, make и binutils. Да, под Windows я пишу в vs-code, компилировать перехожу в окошечко bash (ubuntu) - там вызываю make, потом полученную прошивку заливаю из программатора под Windows. Так что `SDCC`, `make` и `binutils` надо поставить в линуксе. Ну и `mc` тоже не повредит. А под Windows надо поставить программатор (смотри в readme подпапок).

Копируйте папку с именем чипа к себе.

В папке есть файл по имени `sketch.c` - это тот файл который вы и будете наполнять своим кодом. В нем обычные функции `setup` и `loop`.
Кроме того есть файлы `Makefile` и `Makefile.include`. Если нужно подключить дополнительные `c` файлы с кодом - добавьте их в список в файле `Makefile`.

Библиотечка лежит в папке `lib`. По умолчанию она подключена вся. Подробности в README в соответствующих чипам папках.


## Отличия от ардуино

Естественно синтаксис не совсем ардуиновский, поскольку SDCC это компилятор `С` и с++ он не понимает. По сему - никаких классов, все переменные в функции должны быть объявлены до начала вычислений, и самый мой любимый косяк компилятора - все объявления обработчиков прерывания обязательно должны быть указаны в файле в котором лежит main(). То есть:

- Serial.begin() -> `SerialBegin()`
- for(int i = 0;...) -> `int i; for(i = 0;...)`
- и так далее.

Поскольку С не поддерживает функций с одним именем и различными типами параметров, `Serial.print()` пришлось заменить на  `SerialPrintf("format line %d", var)`.

Поскольку у микросхем нет привязки к конкретным pin ардуино, мне пришлось обращаться к ним в зависимости от номера порта. Так вывод `D14` это доступ к 4 пину порта 1. Причем чтобы задать пин аналогового ввода надо обращаться к выводу `A{тут 2 цифры}`, а для "аналогового" выхода надо подключиться к `PWM{тут 2 цифры}`:
- `pinMode(PWM14,OUTPUT);`
- `pinMode(A12,INPUT);`
- `pinMode(D14,INPUT);`
- `a = digitalRead(D14);`
- `b = analogRead(A12);`

К слову, режимы отличаются от ардуино: `BIDIRECTIONAL,OUTPUT==PUSHPULL,INPUT`
