#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Circle.h"
using namespace std;

void main()
{
	Figure* array[10];
	cout << "You can choose:\n\tjust figure - 1\n\trectangle - 2\n\tciclre - 3" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter the number to define the figure "<< i+1 << ":" << endl;
		int choose;
		cin >> choose;
		switch (choose)
		{
		case 1:
			array[i] = new Figure();
			break;
		case 2:
			array[i] = new Rectangle();
			break;
		case 3:
			array[i] = new Circle();
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		array[i]->PrintName();
		array[i]->GetSquare();
		array[i]->Perimeter();
		cout << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		delete array[i];
	}
}