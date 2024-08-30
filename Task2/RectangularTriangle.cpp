#include "RectangularTriangle.h"        // Прямоугольный треугольник

RectangularTriangle::RectangularTriangle() : RectangularTriangle{ 10, 20, 30, 50, 60 }
    {}

RectangularTriangle::RectangularTriangle(int a, int b, int c, int A, int B) : Triangle{ "Прямоугольный треугольник", a, b, c, A, B, 90 }
    {}

void RectangularTriangle::tryException()
{
    Triangle::tryException();
    if (getAngles()[2] != 90)
    {
        throw FigureError("Угол С не равен 90");
    }
}