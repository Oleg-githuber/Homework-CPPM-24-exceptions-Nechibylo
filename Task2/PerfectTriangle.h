#pragma once

#include "IsoscelesTriangle.h"

// �������������� �����������
class PerfectTriangle : public IsoscelesTriangle
{
private:
    void tryException() override;
public:

    PerfectTriangle();

    PerfectTriangle(int a);
};

