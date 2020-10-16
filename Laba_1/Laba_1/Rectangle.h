#pragma once
#include "Figure.h"
class Rectangle : public Figure
{
public:
	int length, width; //длина и ширина соответственно

	void PrintName();
	int Perimeter();
	int GetSquare(); //длину и ширину соответственно
	Rectangle(void);
	~Rectangle(void);
};

