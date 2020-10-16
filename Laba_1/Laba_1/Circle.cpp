#include "Circle.h"
#include <iostream>
#include <cmath>
using namespace std;

Circle::Circle()
{
	cout << "Constructor Circle called" << endl;
	cout << "Input the radius ->\t" << endl;
	cin >> this->R;
}

Circle::~Circle()
{
	cout << "Destructor Circle called" << endl;
}

int Circle::GetSquare()
{
	cout << "The square of Circle is " << this->pi * pow(R, 2) << endl;
	return 0;
}

int Circle::Perimeter()
{
	cout << "The length of circle is " << 2 * this->pi * this->R << endl;
	return 0;
}

void Circle::PrintName()
{
	cout << "Circle" << endl;
}