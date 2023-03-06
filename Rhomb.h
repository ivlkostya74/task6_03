#pragma once
#include "Quadrilateral.h"
class Rhomb :
    public Quadrilateral
{
public:
	Rhomb(int sideLengthA, int angleA, int angleB)
		: Quadrilateral(sideLengthA, sideLengthA, sideLengthA, sideLengthA, angleA, angleB, angleA, angleB)
	{
		Quadrilateral::nameOfFigure_ = "Ромб";
	}
};
