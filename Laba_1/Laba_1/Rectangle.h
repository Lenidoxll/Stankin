#pragma once
#include "Figure.h"
class Rectangle : public Figure
{
public:
	int length, width; //����� � ������ ��������������

	void PrintName();
	int Perimeter();
	int GetSquare(); //����� � ������ ��������������
	Rectangle(void);
	~Rectangle(void);
};

