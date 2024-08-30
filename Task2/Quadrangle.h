#pragma once

#include "Figure.h"

// Четырёхугольник
class Quadrangle : public Figure
{
private:

    void initQuadrangle(int aSide, int bSide, int cSide, int dSide, int AAngle, int BAngle, int CAngle, int DAngle);

protected:

    Quadrangle(std::string newName, int aSide, int bSide, int cSide, int dSide, int AAngle, int BAngle, int CAngle, int DAngle);

    virtual void tryException() override;

public:

    Quadrangle();

    Quadrangle(int aSide, int bSide, int cSide, int dSide, int AAngle, int BAngle, int CAngle, int DAngle);
};

