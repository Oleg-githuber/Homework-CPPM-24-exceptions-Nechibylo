#include "Quadrate.h"		//  вадрат

Quadrate::Quadrate() : Quadrate{ 20 }
{}

Quadrate::Quadrate(int a) : Rectangle{ " вадрат", a, a }
{}

void Quadrate::tryException()
{
	if (getSides()[0] != getSides()[2])
	{
		throw FigureError("не все стороны равны");
	}
	Rectangle::tryException();
}