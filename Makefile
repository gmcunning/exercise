###########################################################################
#
# Makefile for TestFoo.
#
# Gary Cunning, RAP, NCAR, Boulder, CO, 80307, USA
#
# Feb 2022
#
###########################################################################


OBJS = Foo.o TestFoo.o
CC = g++ -Wall -D_BSD_TYPES -DF_UNDERSCORE2 -std=c++14 -g
LIBS = -lm


test_foo: $(OBJS)
	$(CC) $(OBJS) $(LIBS) -o test_foo

clean:
	rm *.o test_foo
