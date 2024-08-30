#include "PerfectTriangle.h"		// �������������� �����������

PerfectTriangle::PerfectTriangle() : PerfectTriangle{ 30 }
{}

PerfectTriangle::PerfectTriangle(int a) : IsoscelesTriangle{ "�������������� �����������", a, a, 60, 60 }
{}

void PerfectTriangle::tryException()
{
	IsoscelesTriangle::tryException();
	if (getSides()[0] != getSides()[1])
	{
		throw FigureError("������� �� �����");
	}
	for (size_t i = 0; i < getSidesCount(); ++i)
	{
		if (getAngles()[i] != 60)
		{
			throw FigureError("�� ��� ���� ����� 60");
		}
	}
}