#include "Figure.h"
#include <iostream>
using namespace std;

Figure::Figure()
{
	cout << "Constructor Figure called" << endl;
}

Figure::~Figure()
{
	cout << "Destructor Figure called" << endl;
}

int Figure::GetSquare()
{
	cout << "Common Figure can't have a square!" << endl;
	return 0;
}

int Figure::Perimeter()
{
	cout << "Common Figure can't have a perimeter!" << endl;
	return 0;
}

void Figure::PrintName()
{
	cout << "Abstract Figure" << endl;
}