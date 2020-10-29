#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"

// Class definition
// Your code here...
class Cylinder : public Circle
{

public:

	Cylinder() : height{ 0.0 }, Circle() {}

	Cylinder(double newradius, double newpi, double newheight) : height{ newheight }, Circle(newradius, newpi){}

	double getHeight() const { return height; }

	void setHeight(double newheight) { height = newheight; }

	double calculateVolume() const { return calculateArea() * height; }

	void printDimensions() const;

	~Cylinder();




private:
	double height;

};

#endif
