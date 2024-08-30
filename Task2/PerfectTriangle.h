#pragma once

#include "IsoscelesTriangle.h"

// Равносторонний треугольник
class PerfectTriangle : public IsoscelesTriangle
{
private:
    void tryException() override;
public:

    PerfectTriangle();

    PerfectTriangle(int a);
};

