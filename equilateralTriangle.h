#pragma once
#include "Triangle.h"
class equilateralTriangle :
    public Triangle
{
public:
	equilateralTriangle(int sideLengthA)
		: Triangle(sideLengthA, sideLengthA, sideLengthA, 60, 60, 60)
	{
		Triangle::nameOfFigure_ = "Равносторонний треугольник";
	};
};

