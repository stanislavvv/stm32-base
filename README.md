# stm32-base

Minimal template project for FreeRTOS+libopencm3 for BluePill

Will be used for learning and some experiments.

## project directories

  * `libopencm3` -- symlink to cloned and compiled [libopencm3](https://github.com/libopencm3/libopencm3).
I use one `libopencm3` directory within several project. Will be subrepo when setup ci someday.
  * `ld` -- ld scripts directory. Copy them from `libopencm3` and edit for your needs.
  * `mk` -- Makefile includes, common and target specific. Also contain `mk/cppcheck.includes` -- directories list for '*.h' used by `make check`.
  * `rtos` -- [FreeRTOS](https://freertos.org/) files, copied from official sources + opencm3.c taken from [stm32f103c8t6](https://github.com/ve3wwg/stm32f103c8t6) project.

## project files

  * `main.c` -- main project file
  * `FreeRTOSConfig.h` -- FreeRTOS configuration
  * `init_f103.h` -- `gpio_init()` for stm32f103
  * `init_f303.h` -- `gpio_init()` for stm32f303
  * `Makefile` -- main Makefile. Comment line with `mk/Makefile.stm32f103.incl` and uncomment next for selecting stm32f303 target
  * `morse.h`, `morse.c` -- quick and dirty library for morse blinking on port C GPIO13.

## build project

default for stm32f103 (standard blue pill):

```
make clean
make
```

for stm32f303 placed on blue pill board:

```
make clean
TARGET_CPU=stm32f303 make
```


