#pragma once
class Figure
{
public:
	Figure(void);
	virtual ~Figure(void);
	virtual int GetSquare();
	virtual int Perimeter();
	virtual void PrintName();
};

