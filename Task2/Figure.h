#pragma once

#include <string>
#include "FigureError.h"

// Базовый класс
class Figure
{
private:

    std::string name{};
    int sidesCount{};
    int sides[4] = {};
    int angles[4] = {};

protected:

    Figure(int value, std::string str);

    void setSides(int* array);

    void setAngles(int* array);

    virtual void tryException();

    int anglesSum();

public:

    Figure();

    std::string getName();

    int getSidesCount();

    int* getSides();

    int* getAngles();

    std::string toString();
};

