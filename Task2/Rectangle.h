#pragma once

#include "Quadrangle.h"

// �������������
class Rectangle : public Quadrangle
{
protected:

    Rectangle(std::string newName, int a, int b);

    virtual void tryException() override;

public:

    Rectangle();

    Rectangle(int a, int b);
};

