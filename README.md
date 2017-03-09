Smart Surf 4G 3.10.101+ Linux kernel
====================================
####Работает:

Полностью: экран, тачскрин, кнопка выключения, сеть, звук через динамики

Частично: кнопки громкости перепутаны местами

Не работает: всё остальное

####Для сборки:

1) Установить архитектуру arm (32bit)

`export ARCH=arm`

2) Установить тулчейн и путь к нему

`pushd ..`

`git clone https://github.com/assusdan/arm-cortex-linux-gnueabi-linaro_5.2`

`export CROSS_COMPILE=$PWD/arm-cortex-linux-gnueabi-linaro_5.2/bin/arm-cortex-linux-gnueabi-`

`popd`

3) Выбрать нужный конфиг

`make Sprint4g_defconfig`

4) Собрать

`make -j4`

5) Взять получившийся zImage-dts из папки arch/arm/boot

6) Упаковать его с помощью Carliv Image Kitchen в понравившийся 32битный boot.img (я пакую в SlimLP от МТС Smart Sprint 4G)

6) В system порта поменять модем на МТСовый.

8) Прошить.

Special credit goes to:
assusdan



