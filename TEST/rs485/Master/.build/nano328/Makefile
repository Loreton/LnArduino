























.build/nano328/SoftwareSerial/SoftwareSerial.o : /usr/share/arduino/libraries/SoftwareSerial/SoftwareSerial.cpp
	@echo [93mSoftwareSerial/SoftwareSerial.cpp[0m
	@mkdir -p .build/nano328/SoftwareSerial
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/SoftwareSerial/SoftwareSerial.cpp
include .build/nano328/SoftwareSerial/SoftwareSerial.d



.build/nano328/SoftwareSerial/libSoftwareSerial.a : .build/nano328/SoftwareSerial/SoftwareSerial.o
	@echo [92mLinking libSoftwareSerial.a[0m
	@/usr/bin/avr-ar rcs $@ $^












.build/nano328/RS485_protocol/RS485_non_blocking.o : /usr/share/arduino/libraries/RS485_protocol/RS485_non_blocking.cpp
	@echo [93mRS485_protocol/RS485_non_blocking.cpp[0m
	@mkdir -p .build/nano328/RS485_protocol
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/RS485_protocol/RS485_non_blocking.cpp
include .build/nano328/RS485_protocol/RS485_non_blocking.d

.build/nano328/RS485_protocol/RS485_protocol.o : /usr/share/arduino/libraries/RS485_protocol/RS485_protocol.cpp
	@echo [93mRS485_protocol/RS485_protocol.cpp[0m
	@mkdir -p .build/nano328/RS485_protocol
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/RS485_protocol/RS485_protocol.cpp
include .build/nano328/RS485_protocol/RS485_protocol.d



.build/nano328/RS485_protocol/libRS485_protocol.a : .build/nano328/RS485_protocol/RS485_non_blocking.o .build/nano328/RS485_protocol/RS485_protocol.o
	@echo [92mLinking libRS485_protocol.a[0m
	@/usr/bin/avr-ar rcs $@ $^












.build/nano328/LnFunctions/D2X.o : /usr/share/arduino/libraries/LnFunctions/D2X.cpp
	@echo [93mLnFunctions/D2X.cpp[0m
	@mkdir -p .build/nano328/LnFunctions
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/LnFunctions/D2X.cpp
include .build/nano328/LnFunctions/D2X.d

.build/nano328/LnFunctions/printHex.o : /usr/share/arduino/libraries/LnFunctions/printHex.cpp
	@echo [93mLnFunctions/printHex.cpp[0m
	@mkdir -p .build/nano328/LnFunctions
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/LnFunctions/printHex.cpp
include .build/nano328/LnFunctions/printHex.d



.build/nano328/LnFunctions/libLnFunctions.a : .build/nano328/LnFunctions/D2X.o .build/nano328/LnFunctions/printHex.o
	@echo [92mLinking libLnFunctions.a[0m
	@/usr/bin/avr-ar rcs $@ $^







.build/nano328/arduino/wiring_shift.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_shift.c
	@echo [93marduino/wiring_shift.c[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_shift.c
include .build/nano328/arduino/wiring_shift.d

.build/nano328/arduino/wiring_digital.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_digital.c
	@echo [93marduino/wiring_digital.c[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_digital.c
include .build/nano328/arduino/wiring_digital.d

.build/nano328/arduino/WInterrupts.o : /usr/share/arduino/hardware/arduino/cores/arduino/WInterrupts.c
	@echo [93marduino/WInterrupts.c[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/WInterrupts.c
include .build/nano328/arduino/WInterrupts.d

.build/nano328/arduino/wiring_analog.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_analog.c
	@echo [93marduino/wiring_analog.c[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_analog.c
include .build/nano328/arduino/wiring_analog.d

.build/nano328/arduino/wiring_pulse.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_pulse.c
	@echo [93marduino/wiring_pulse.c[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_pulse.c
include .build/nano328/arduino/wiring_pulse.d

.build/nano328/arduino/wiring.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring.c
	@echo [93marduino/wiring.c[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring.c
include .build/nano328/arduino/wiring.d






.build/nano328/arduino/CDC.o : /usr/share/arduino/hardware/arduino/cores/arduino/CDC.cpp
	@echo [93marduino/CDC.cpp[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/CDC.cpp
include .build/nano328/arduino/CDC.d

.build/nano328/arduino/Print.o : /usr/share/arduino/hardware/arduino/cores/arduino/Print.cpp
	@echo [93marduino/Print.cpp[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/Print.cpp
include .build/nano328/arduino/Print.d

.build/nano328/arduino/HardwareSerial.o : /usr/share/arduino/hardware/arduino/cores/arduino/HardwareSerial.cpp
	@echo [93marduino/HardwareSerial.cpp[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/HardwareSerial.cpp
include .build/nano328/arduino/HardwareSerial.d

.build/nano328/arduino/WString.o : /usr/share/arduino/hardware/arduino/cores/arduino/WString.cpp
	@echo [93marduino/WString.cpp[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/WString.cpp
include .build/nano328/arduino/WString.d

.build/nano328/arduino/HID.o : /usr/share/arduino/hardware/arduino/cores/arduino/HID.cpp
	@echo [93marduino/HID.cpp[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/HID.cpp
include .build/nano328/arduino/HID.d

.build/nano328/arduino/WMath.o : /usr/share/arduino/hardware/arduino/cores/arduino/WMath.cpp
	@echo [93marduino/WMath.cpp[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/WMath.cpp
include .build/nano328/arduino/WMath.d

.build/nano328/arduino/USBCore.o : /usr/share/arduino/hardware/arduino/cores/arduino/USBCore.cpp
	@echo [93marduino/USBCore.cpp[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/USBCore.cpp
include .build/nano328/arduino/USBCore.d

.build/nano328/arduino/main.o : /usr/share/arduino/hardware/arduino/cores/arduino/main.cpp
	@echo [93marduino/main.cpp[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/main.cpp
include .build/nano328/arduino/main.d

.build/nano328/arduino/Stream.o : /usr/share/arduino/hardware/arduino/cores/arduino/Stream.cpp
	@echo [93marduino/Stream.cpp[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/Stream.cpp
include .build/nano328/arduino/Stream.d

.build/nano328/arduino/new.o : /usr/share/arduino/hardware/arduino/cores/arduino/new.cpp
	@echo [93marduino/new.cpp[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/new.cpp
include .build/nano328/arduino/new.d

.build/nano328/arduino/IPAddress.o : /usr/share/arduino/hardware/arduino/cores/arduino/IPAddress.cpp
	@echo [93marduino/IPAddress.cpp[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/IPAddress.cpp
include .build/nano328/arduino/IPAddress.d

.build/nano328/arduino/Tone.o : /usr/share/arduino/hardware/arduino/cores/arduino/Tone.cpp
	@echo [93marduino/Tone.cpp[0m
	@mkdir -p .build/nano328/arduino
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/Tone.cpp
include .build/nano328/arduino/Tone.d



.build/nano328/arduino/libarduino.a : .build/nano328/arduino/wiring_shift.o .build/nano328/arduino/wiring_digital.o .build/nano328/arduino/WInterrupts.o .build/nano328/arduino/wiring_analog.o .build/nano328/arduino/wiring_pulse.o .build/nano328/arduino/wiring.o .build/nano328/arduino/CDC.o .build/nano328/arduino/Print.o .build/nano328/arduino/HardwareSerial.o .build/nano328/arduino/WString.o .build/nano328/arduino/HID.o .build/nano328/arduino/WMath.o .build/nano328/arduino/USBCore.o .build/nano328/arduino/main.o .build/nano328/arduino/Stream.o .build/nano328/arduino/new.o .build/nano328/arduino/IPAddress.o .build/nano328/arduino/Tone.o
	@echo [92mLinking libarduino.a[0m
	@/usr/bin/avr-ar rcs $@ $^















.build/nano328/src/my485Master.o : .build/nano328/src/my485Master.cpp
	@echo [93msrc/my485Master.cpp[0m
	@mkdir -p .build/nano328/src
	@/usr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=101 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/eightanaloginputs -I/usr/share/arduino/libraries/SoftwareSerial -I/usr/share/arduino/libraries/RS485_protocol -I/usr/share/arduino/libraries/LnFunctions -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions -iquote src  -o $@ -c .build/nano328/src/my485Master.cpp
include .build/nano328/src/my485Master.d







.build/nano328/firmware.elf : .build/nano328/src/my485Master.o .build/nano328/SoftwareSerial/libSoftwareSerial.a .build/nano328/RS485_protocol/libRS485_protocol.a .build/nano328/LnFunctions/libLnFunctions.a .build/nano328/arduino/libarduino.a
	@echo [92mLinking firmware.elf[0m
	@/usr/bin/avr-gcc -mmcu=atmega328p -Wl,-Os -Wl,--gc-sections -o $@ $^ -lm


.build/nano328/firmware.hex : .build/nano328/firmware.elf
	@echo [92mConverting to firmware.hex[0m
	@/usr/bin/avr-objcopy -O ihex -R .eeprom $^ $@

include .build/nano328/src/dependencies.d .build/nano328/arduino/dependencies.d .build/nano328/LnFunctions/dependencies.d .build/nano328/SoftwareSerial/dependencies.d .build/nano328/RS485_protocol/dependencies.d

all : .build/nano328/firmware.hex
	@true

