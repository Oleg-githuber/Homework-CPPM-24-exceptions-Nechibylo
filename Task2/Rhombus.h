#pragma once

#include "Quadrangle.h"

// ����
class Rhombus : public Quadrangle
{
private:

    void tryException() override;

public:

    Rhombus();

    Rhombus(int a, int A, int B);
};

