#include "Parallelogram.h"		// ѕараллелограм

Parallelogram::Parallelogram() : Parallelogram{ 20, 30, 30, 40 }
{}

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrangle{ "ѕараллелограм", a, b, a, b, A, B, A, B }
{}

void Parallelogram::tryException()
{
	Quadrangle::tryException();
	if ((getSides()[0] != getSides()[2]) || (getSides()[1] != getSides()[3]))
	{
		throw FigureError("противоположные стороны не равны");
	}
	if ((getAngles()[0] != getAngles()[2]) || (getAngles()[1] != getAngles()[3]))
	{
		throw FigureError("противоположные углы не равны");
	}
}