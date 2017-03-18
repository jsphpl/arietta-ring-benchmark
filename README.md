# Ring Oscillator Benchmark

This repository contains code to determine the ring oscillator performace of the [Arietta G25](https://www.acmesystems.it/arietta) by Acme Systems.

It works like the following:

- Physically connect (jumper) the PC0 and PC1 pins
- Read a bit from PC1
- Invert that bit and write it to PC0

Using an oscilloscope, we can now determine the frequency at which this i/o pair oscillates.

## Test Setup and results

Test code for both C and Python APIs is placed in `benchmark.c` and `benchmark.py`, respectively.

For detailed instructions on the test setup and a glance on how the Arietta performs, head over to [my FabAcademy page](http://archive.fabacademy.org/archives/2017/fablaberfindergarden/students/260/fabacademy/week-8/).

## License

The test code itself is so basic, it needs no license. However the contained libraries are licensed as follows:

- [acmepins.py](https://github.com/AcmeSystems/acmepins): MIT / LGPL-3
- [gpiolib.c](https://github.com/tanzilli/gpiolib): [Proprietary](https://github.com/tanzilli/gpiolib/blob/master/gpiolib.c)
