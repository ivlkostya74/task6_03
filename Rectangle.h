#pragma once
#include "Quadrilateral.h"
class Rectangle : public Quadrilateral
{
public: //int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD
	Rectangle(int sideLengthA, int sideLengthB)
		: Quadrilateral(sideLengthA, sideLengthB, sideLengthA, sideLengthB, 90, 90, 90, 90)
	{
		Quadrilateral::nameOfFigure_ = "Прямоугольник";
	}
};

