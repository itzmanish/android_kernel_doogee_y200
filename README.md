Doogee Y200 3.10.101+ Linux kernel
====================================
####Not working:
Fingerprint
Camera focus
Flashlight
Front camera rotated 180 degree


####For the Assembly:

1) set arch to arm (32bit) or arm64

`export ARCH=arm`

2) set toolchain and path

`pushd ..`

`git clone https://github.com/assusdan/arm-cortex-linux-gnueabi-linaro_5.2`

`export CROSS_COMPILE=$PWD/arm-cortex-linux-gnueabi-linaro_5.2/bin/arm-cortex-linux-gnueabi-`

`popd`

3) select the desired configuration

`make Sprint4g_defconfig`

4) build

`make -j4`

5) Take the resulting zImage dts in the folder arch/arm/boot

6) Pack it using Carliv Image Kitchen 

7) Flash

Special credit goes to:
assusdan



