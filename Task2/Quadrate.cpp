#include "Quadrate.h"		// �������

Quadrate::Quadrate() : Quadrate{ 20 }
{}

Quadrate::Quadrate(int a) : Rectangle{ "�������", a, a }
{}

void Quadrate::tryException()
{
	if (getSides()[0] != getSides()[2])
	{
		throw FigureError("�� ��� ������� �����");
	}
	Rectangle::tryException();
}