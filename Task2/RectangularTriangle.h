#pragma once

#include "Triangle.h"

// ������������� �����������
class RectangularTriangle : public Triangle
{
protected:

    void tryException() override;

public:

    RectangularTriangle();

    RectangularTriangle(int a, int b, int c, int A, int B);
};

