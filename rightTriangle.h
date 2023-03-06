#pragma once
#include "Triangle.h"
class rightTriangle :
	public Triangle
{
public:
	rightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB)
		: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, 90)
	{
		Triangle::nameOfFigure_ = "Прямоугольный треугольник";

	};

};