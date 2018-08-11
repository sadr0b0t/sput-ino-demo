# sput-ino-demo
Arduino demo project for sput-ino lib (Sput unit testing framework for C/C++)

https://github.com/sadr0b0t/sput-ino

## Project structure

Tested project should be set up as Arduino library.

Project business logic to test
~~~
src/mylib.h
src/mylib.cpp
~~~

Startup sketch
~~~
sput-ino-demo/sput-ino-demo.ino
~~~

Projects tests
~~~
test/
~~~

Tests and test suites
~~~
test/mylib-test-arduino/mylib-test.h
test/mylib-test-arduino/mylib-test.cpp
~~~

Test startup sketch to run tests on device
~~~
test/mylib-test-arduino/mylib-test-arduino.ino
~~~

Run tests on desktop (libc)
~~~
test/mylib-test-desktop/
~~~

Main
~~~
test/mylib-test-desktop/mylib-test-main.cpp
~~~

Arduino API stubs (feel free to edit and add more calls once required)
~~~
test/mylib-test-desktop/Arduino.h
test/mylib-test-desktop/Arduino.cpp
~~~

minimalistic build script (should be better converted to favourite build tool config)
~~~
test/mylib-test-desktop/build.sh
~~~

## Workflow setup

Tested project should be set up as Arduino library. Copy or link project dir to _$HOME/Arduino/libraries_

Either store _*.h_ and _*.cpp_ files in project root or put them to src dir and add library.properties file to project root in this case.

Project sketch would be available from _File > Examples_ menu, but it will open read-only. To open project and project test sketches for editing, open them as regular Arduino sketch from file system with _File > Open..._.

To run project on device open _sput-ino-demo/sput-ino-demo.ino_ as normal Arduino sketch.

To run project tests on device open _test/mylib-test-arduino/mylib-test-arduino.ino_

To run project tests on desktop, build tests with _test/mylib-test-desktop/build.sh_ script and run _test_mylib_ generated executable.

