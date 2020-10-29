#include "Cylinder.h"

#include <iostream>
using namespace std;

// Class implementation
// Your code here...
void Cylinder::printDimensions() const
{
	Circle::printDimensions();
	cout << "Height: " << height << endl;
}

Cylinder::~Cylinder() {}
