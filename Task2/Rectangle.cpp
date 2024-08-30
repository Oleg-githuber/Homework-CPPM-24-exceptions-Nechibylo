#include "Rectangle.h"		// Прямоугольник

Rectangle::Rectangle() : Rectangle{ 10, 20 }
{}

Rectangle::Rectangle(int a, int b) : Quadrangle{ "Прямоугольник", a, b, a, b, 90, 90, 90, 90 }
{}

Rectangle::Rectangle(std::string newName, int a, int b) : Quadrangle{ newName, a, b, a, b, 90, 90, 90, 90 }
{}

void Rectangle::tryException()
{
	Quadrangle::tryException();
	if (getSides()[0] != getSides()[2])
	{
		throw FigureError("стороны а и в не равны");
	}
	if (getSides()[1] != getSides()[3])
	{
		throw FigureError("стороны c и d не равны");
	}

	for (int i = 0; i < getSidesCount(); ++i)
	{
		if (getAngles()[i] != 90) {
			throw FigureError("не все углы равны 90");
		}
	}
}
