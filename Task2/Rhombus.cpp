#include "Rhombus.h"	// ����

Rhombus::Rhombus() : Rhombus{ 30, 30, 40 }
{}

Rhombus::Rhombus(int a, int A, int B) : Quadrangle{ "����", a, a, a, a, A, B, A, B }
{}

void Rhombus::tryException()
{
	Quadrangle::tryException();
	for (int i = 1; i < getSidesCount(); ++i)
	{
		if (getSides()[0] != getSides()[i])
		{
			throw FigureError("�� ��� ������� �����");
		}
	}

	if ((getAngles()[0] != getAngles()[2]) || (getAngles()[1] != getAngles()[3]))
	{
		throw FigureError("��������������� ���� �� �����");
	}
}