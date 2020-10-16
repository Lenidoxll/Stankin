#pragma once
#include "Figure.h"
class Circle : public Figure
{
private:
	int pi = 3.14; //константное значение пи
public:
	int R; //радиус окружности

	Circle(void);
	~Circle(void);
	int GetSquare();
	int Perimeter();
	void PrintName();
};

