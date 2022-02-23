/**
 *
 *  @file TestFoo
 *
 *  Test for Foo class
 *
 *  @author G. M. Cunning
 *
 *  @date 23 February 2022
 *
 */

#include "Foo.hh"
#include <cassert>
#include <iostream>

using namespace std;

int main() {

  Foo aFoo;
  aFoo.printInfo();
  Foo bFoo(5.0);
  bFoo.printInfo();

  Foo cFoo = bFoo;
  cFoo.printInfo();

  Foo dFoo(bFoo);
  dFoo.printInfo();

  aFoo.setRadius(10.0);
  aFoo.printInfo();
  double vol = aFoo.getVolume();
  // volume should be 4188.7902
  assert(fabs(vol-4188.7902) < 0.001);

  // test limits
  Foo littleFoo;
  littleFoo.setRadius(0.00001);
  littleFoo.printInfo();

  Foo bigFoo;
  bigFoo.setRadius(10000.0);
  bigFoo.printInfo();
}