#pragma once
#include "Quadrilateral.h"
class Square :
    public Quadrilateral
{
public:
	Square(int sideLengthA)
		: Quadrilateral(sideLengthA, sideLengthA, sideLengthA, sideLengthA, 90, 90, 90, 90)
	{
		Quadrilateral::nameOfFigure_ = " вадрат";
	}
};

