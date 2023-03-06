#pragma once
#include "Quadrilateral.h"
class Parallelogram :
    public Quadrilateral
{
public:
	Parallelogram(int sideLengthA, int sideLengthB, int angleA, int angleB)
		: Quadrilateral(sideLengthA, sideLengthB, sideLengthA, sideLengthB, angleA, angleB, angleA, angleB)
	{
		Quadrilateral::nameOfFigure_ = "ֿאנאככוכמדנאלל";
	}
};
