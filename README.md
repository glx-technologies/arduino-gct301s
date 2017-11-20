# arduino-gct301s

## Installation
Just like any custom boards for the Arduino platform, to install this package, add the following url to the board manager:

`https://raw.githubusercontent.com/glx-technologies/arduino-gct301s/master/package_gct301s_boards_index.json`

## Note
1. The OpenOCD is a customed version with the GCT301S flash driver added. The current binary is only available on Linux.
2. The OpenOCD depends on libusb, libhidapi and libudev. It was compiled on Centos 6.6.The sources are forked from the OpenOCD repository and hosted at:
    `https://github.com/mowsong/openocd-gct301s`

3. On Ubuntu, libudev.so.0 is not installed by default. The best way to add the shared library is to as described in:
    `https://askubuntu.com/questions/288821/how-do-i-resolve-a-cannot-open-shared-object-file-libudev-so-0-error`

4. The libusb and libhidapi installations are quite common and information is readily available on the web.
5. Currently, we can compile a sketch and then upload to the board using either J-Link or CMSIS-DAP. However, the Wiring codes are not ported yet. 
6. The package contains an example sketch that access the registers directly to blink an LED.

## To Do
1. Porting the Wiring codes
2. Bootloader for program upload
3. Board design and fabrication
4. Testing with existing Arduino libraries
5. Cross-compile openocd for Windows
6. Static linkage for openocd to remove the dependecies on shared library
7. many more...
