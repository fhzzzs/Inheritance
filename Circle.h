#ifndef CIRCLE_H
#define CIRCLE_H

// Class definition
// Your code here...
class Circle
{
public:
	Circle() : radius{ 0.0 }, pi{ 3.142 } {}

	Circle(double newradius,double newpi) : radius{ newradius }, pi{ newpi } {}

	double getRadius() const { return radius; }

	double getPi() const { return pi; }

	void setRadius(double newradius) { radius = newradius; }

	void setPi(double newpi) { pi = newpi; }

	double calculateArea() const { return pi * radius * radius; }

	void printDimensions() const;
	
	
	
	~Circle();







private:
	double radius, pi;

};







#endif

