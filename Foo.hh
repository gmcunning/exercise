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

#ifndef    FOO_H
#define    FOO_H

#define _USE_MATH_DEFINES  // get access to pi (M_PI)

// C++ include files
#include <iostream>
#include <cmath>

class Foo {

public:

    /** limits of valid radii for the parameterization
     *  the units are mm. */
    static const double MIN_RADIUS; // 0.001 mm
    static const double MAX_RADIUS; // 100 mm

    /** contructors  */
    Foo();
    Foo(double r);
    Foo(const Foo&);
    Foo &operator=(const Foo&);

    /** destructor */
    virtual ~Foo();

    /** check on state of object */
    bool isValid() const { return _isValid; }

    /** set the radius */
    bool setRadius(double r);

    /** get the volume */
    double getVolume() const { return _volume; }

    /** print a message about the staus */
    void printInfo() const;

private:

    /** state of object */
    bool _isValid;

    /** radius of sphere
     * units for the radius are mm
     * the parameterization's limits for radii are 0.001 and 100 mm*/
    double _radius;


    /** volume of sphere */
    double _volume;

    /** test the radius
     *
     * @param r radius of sphere in mm
     * @return tru or false
     */
    void _testRadius(double r);

    /** compute the volume
     *
     * @param r radius of the sphere
     * @return volume of the sphere
     *
     * assumes that the _radius is set to valid value
     */
     double _computeVolume();
};


# endif   // FOO_H
