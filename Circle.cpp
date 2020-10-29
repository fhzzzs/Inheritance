#include "Circle.h"

#include <iostream>
using namespace std;

// Class implementation
// Your code here...
void Circle::printDimensions() const
{
	cout << "Radius: " << radius << endl;
	cout << "Pi: " << pi << endl;
}

Circle::~Circle() {}
