#include "Triangle.h"   // �����������

void Triangle::initTriangle(int aSide, int bSide, int cSide, int AAngle, int BAngle, int CAngle)
{
    int arrSides[] = { aSide, bSide, cSide };
    setSides(arrSides);
    int arrAngles[] = { AAngle, BAngle, CAngle };
    setAngles(arrAngles);
    tryException();
}

Triangle::Triangle() : Triangle{ 10, 20, 30, 50, 60, 70 }
{
}

Triangle::Triangle(int aSide, int bSide, int cSide, int AAngle, int BAngle, int CAngle) :
    Figure{ 3, "�����������" }
{
    initTriangle(aSide, bSide, cSide, AAngle, BAngle, CAngle);
}

void Triangle::tryException()
{
    if (getSidesCount() != 3)
    {
        throw FigureError("���������� ������ �� ����� 3");
    }
    if (anglesSum() != 180)
    {
        throw FigureError("����� ����� �� ����� 180");
    }
}

Triangle::Triangle(std::string newName, int aSide, int bSide, int cSide, int AAngle, int BAngle, int CAngle) :
    Figure{ 3, newName }
{
    initTriangle(aSide, bSide, cSide, AAngle, BAngle, CAngle);
}
