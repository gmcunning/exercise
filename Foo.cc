/**
 *
 *  @file Foo.hh
 *
 *  @class Foo
 *
 *  this class is a simple example that represents a parameterization defined as the volume of a sphere.
 *
 *  The interface takes a radius for the sphere, with units of millimeters (mm). The parameterization is
 *  valid within the limits of 0.001 and 100 mm.
 *
 *  If a Foo object is initialized or created with an invalid radius. its status is set to invalid. Access to the
 *  state of the object is through isValid(). The object has two states: valid(true) and invalid(faLse)
 *
 * The user of the interface is responsible for managing the state of Foo objects
 *
 *  @author Gary Cunning
 *
 *  @date 23 February 2022
 *
 */

#include "Foo.hh"

using namespace std;

// define constants
const double Foo::MIN_RADIUS = 0.001; //mm
const double Foo::MAX_RADIUS = 100.0; // 100 mm

// create a valid sphere with the constructor
Foo::Foo() :
_isValid(true),
_radius(MIN_RADIUS)
{
  _volume = _computeVolume();
};

Foo::Foo(double r)
{
  _testRadius(r);

  if (_isValid == true) {
    _radius = r;
    _volume = _computeVolume();
  }
}


Foo::Foo(const Foo& from)
{
  _isValid = from._isValid;
  _radius = from._radius;
  _volume = from._volume;
}

/** destructor */
Foo::~Foo()
{
  // do nothing
}

/** set the radius */
bool Foo::setRadius(double r)
{
  _testRadius(r);

  if (_isValid == true) {
    _radius = r;
    _volume = _computeVolume();
    return true;
  }
  else {
    return false;
  }
}

/** print info about a Foo object */
void Foo::printInfo() const
{
  cout << "Foo info:" << endl;
  cout << std::boolalpha << "  valid: " << _isValid << endl;
  cout << "  radius: " << _radius << " mm" << endl;
  cout << "  volume: " << _volume << " mm^3" << endl;
  cout << "  minimum radius: " << MIN_RADIUS << " mm" << endl;
  cout << "  minimum radius: " << MAX_RADIUS << " mm" << endl << endl;
}

/** test the radius */
void Foo::_testRadius(double r)
{
  if ((r < MIN_RADIUS) || (r > MAX_RADIUS)) {
    _isValid = false;
  }
  else {
    _isValid = true;
  }
}

/** compute the volume */
double Foo::_computeVolume()
{
  double vol = (4.0 * M_PI * pow(_radius, 3.0))/3.0;
  return vol;
}

