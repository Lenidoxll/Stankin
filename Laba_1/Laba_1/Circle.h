#pragma once
#include "Figure.h"
class Circle : public Figure
{
private:
	int pi = 3.14; //����������� �������� ��
public:
	int R; //������ ����������

	Circle(void);
	~Circle(void);
	int GetSquare();
	int Perimeter();
	void PrintName();
};

