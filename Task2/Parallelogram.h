#pragma once

#include "Quadrangle.h"

// Параллелограм
class Parallelogram: public Quadrangle
{
protected:

    void tryException() override;

public:

    Parallelogram();

    Parallelogram(int a, int b, int A, int B);
};

