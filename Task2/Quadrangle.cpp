#include "Quadrangle.h"     // ���������������

    Quadrangle::Quadrangle() : Quadrangle{ 10, 20, 30, 40, 50, 60, 70, 80 }
    {}

    Quadrangle::Quadrangle(int aSide, int bSide, int cSide, int dSide, int AAngle, int BAngle, int CAngle, int DAngle) :
        Figure{ 4, "��������������" }
    {
        initQuadrangle(aSide, bSide, cSide, dSide, AAngle, BAngle, CAngle, DAngle);
    }

    Quadrangle::Quadrangle(std::string newName, int aSide, int bSide, int cSide, int dSide, int AAngle, int BAngle, int CAngle, int DAngle) :
        Figure{ 4, newName }
    {
        initQuadrangle(aSide, bSide, cSide, dSide, AAngle, BAngle, CAngle, DAngle);
    }

    void Quadrangle::tryException()
    {
        if (getSidesCount() != 4)
        {
            throw FigureError("���������� ������ �� ����� 4");
        }
        if (anglesSum() != 360)
        {
            throw FigureError("����� ����� �� ����� 360");
        }
    }

    void Quadrangle::initQuadrangle(int aSide, int bSide, int cSide, int dSide, int AAngle, int BAngle, int CAngle, int DAngle)
    {
        int arrSides[] = { aSide, bSide, cSide, dSide };
        setSides(arrSides);
        int arrAngles[] = { AAngle, BAngle, CAngle, DAngle };
        setAngles(arrAngles);
        tryException();
    }
