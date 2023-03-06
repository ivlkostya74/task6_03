#pragma once
#include "Triangle.h"
class isoscelesTriangle :
    public Triangle
{
public:
	isoscelesTriangle(int sideLengthA, int sideLengthB, int angleA, int angleB)
		: Triangle(sideLengthA, sideLengthB, sideLengthA, angleA, angleB, angleA)
	{
		Triangle::nameOfFigure_ = "Равнобедренный треугольник";
	};
};

