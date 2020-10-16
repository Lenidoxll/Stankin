#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
	cout << "Constructor Rectangle called" << endl;
	cout << "Input the length and the width of rectangle ->\t";
	cin >> this->length >> this->width;
}

Rectangle::~Rectangle()
{
	cout << "Destructor Rectangle called" << endl;
}

int Rectangle::GetSquare()
{
	cout << "The square of Rectangle is " << this->length * this->width << endl;
	return 0;
}

int Rectangle::Perimeter()
{
	cout << "The perimeter of rectangle is " << 2 * (this->length + this->width) << endl;
	return 0;
}

void Rectangle::PrintName()
{
	cout << "Rectangle" << endl;
}