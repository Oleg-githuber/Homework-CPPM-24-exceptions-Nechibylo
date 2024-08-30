#pragma once

#include "Rectangle.h"

//  вадрат
class Quadrate : public Rectangle
{
private:

    void tryException() override;

public:

    Quadrate();

    Quadrate(int a);
};

