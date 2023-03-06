# Demo program for CPU/MCU board CPU/MCU 8/80-28-MCP

## Brief

CPU/MCU 8/80-28-MCP is a modular board to host with 28-pin
PIC16F886 or similar microcontrollers.

More info on product page [LCElectronics/MCU8-80-28-MCP](http://lecomptoirelectronique.fr/store/index.php?route=product/category&path=67).

The board has a 8 MHz crystal for high clock accuracy and
a 32768 Hz crystal for Timer 1 RTC oscillator.

It is fit with a 6 pin header ICSP port and 2 4-pin FPC
ports to attached serial connected boarts. The ports are
in/out configuration for attaching multiple modules (expansions,
analog, digital, relays, ...).

A single power supply can fit the whole setup.

Please see product page and ressources for more informations.

## Technical specs

  - CPU automatically discovers, attaches and scans devices on serial bus as they appear or disconnect
  - Peripherals can be attached and detached while the bus it live (at runtime)
  - Events are logged on serial output

The CPU provides following services:
  - RTC real time clock (this version doesn't have back-up battery)
  - Power supply and communications via 4-wire FPC serial bus
  - Permanent cyclic scanns of attached devices
  - Central point to Read/Write any attached device

## Ressources

LCElectronics portal
  - [Home](http://lecomptoirelectronique.fr/store)
  - [Product page MCU8-80-28-MCP](http://lecomptoirelectronique.fr/store/index.php?route=product/category&path=67)