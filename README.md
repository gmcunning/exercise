# exercise
This is a repo that contains files for the homework exercise.

There are files for the Foo class, a test program, and a Makefile

The version of g++ is gcc version 6.3.0 20170516 (Debian 6.3.0-18+deb9u1)

Access to make is desirable. However, the program can be built with:
  g++ -Wall  -D_BSD_TYPES -DF_UNDERSCORE2 -std=c++14 -g TestFoo.cc Foo.cc -o test_foo
  
Instructions to build and run the exercise
1) clone the repo: git clone https://github.com/gmcunning/exercise
2) build the the program: make test_foo
3) run the program: test_foo
