// task6_03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Triangle.h"
#include "rightTriangle.h"
#include "isoscelesTriangle.h"
#include "equilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"

void printFigure(Figure& figure)
{
	std::cout << std::endl;
	std::cout << figure.getNameOfFigure() << ":" << std::endl;

	std::cout << "Стороны:";
	std::cout << " a = " << figure.getSideLengthA() << ", b = " << figure.getSideLengthB() << ", с = " << figure.getSideLengthC();
	if (figure.getHaveFourSides())
	{
		std::cout << ", d = " << figure.getSideLengthD() << std::endl;
	}
	else { std::cout << std::endl; }

	std::cout << "Углы:";
	std::cout << " А = " << figure.getAngleA() << ", В = " << figure.getAngleB() << ", С = " << figure.getAngleC();
	if (figure.getHaveFourSides()) { std::cout << ", D = " << figure.getAngleD() << std::endl; }
	else { std::cout << std::endl; }
}

int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");

	Triangle Triangle1(10, 20, 30, 40, 50, 60);
	printFigure(Triangle1);

	rightTriangle rightTriangle1(10, 20, 30, 40, 50);
	printFigure(rightTriangle1);

	isoscelesTriangle isoscelesTriangle1(11, 220, 330, 440);
	printFigure(isoscelesTriangle1);

	equilateralTriangle equilateralTriangle1(111);
	printFigure(equilateralTriangle1);

	Quadrilateral Quadrilateral1(10, 20, 30, 40, 50, 60, 70, 80);
	printFigure(Quadrilateral1);

	Rectangle Rectangle1(14, 24);
	printFigure(Rectangle1);

	Square Square1(333);
	printFigure(Square1);

	Parallelogram Parallelogram1(555, 666, 777, 888);
	printFigure(Parallelogram1);

	Rhomb Rhomb1(14, 24, 34);
	printFigure(Rhomb1);
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
