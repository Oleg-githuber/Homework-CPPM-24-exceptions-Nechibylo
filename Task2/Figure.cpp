#include "Figure.h"     // Базовый класс

Figure::Figure() = default;

Figure::Figure(int value, std::string str) : sidesCount{ value }, name{ str }
{}

void Figure::setSides(int* array)
{
    for (int i{ 0 }; i < sidesCount; ++i)
    {
        sides[i] = array[i];
    }
}

void Figure::setAngles(int* array)
{
    for (int i{ 0 }; i < sidesCount; ++i)
    {
        angles[i] = array[i];
    }
}

void Figure::tryException()
{
}

std::string Figure::getName() { return name; }

int Figure::getSidesCount() { return sidesCount; }

int* Figure::getSides() { return sides; }

int* Figure::getAngles() { return angles; }

int Figure::anglesSum()
{
    int sum{};
    for (int i = 0; i < getSidesCount(); ++i)
    {
        sum += getAngles()[i];
    }
    return sum;
}

std::string Figure::toString()
{
    std::string result{getName() + "( стороны "};
    int sidesCount{ getSidesCount() };
    for (int i = 0; i < sidesCount - 1; ++i)
    {
        result = result + std::to_string(getSides()[i]) + ", ";
    }
    result = result + std::to_string(getSides()[sidesCount - 1]) + "; углы ";
    for (int i = 0; i < sidesCount - 1; ++i)
    {
        result = result + std::to_string(getAngles()[i]) + ", ";
    }
    result = result + std::to_string(getAngles()[sidesCount - 1]) + ")";
    return result;
}
