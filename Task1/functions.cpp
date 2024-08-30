#include "functions.h"
#include "bad_length.h"

int function(std::string str, int forbidden_length)
{
	unsigned long long strLength{ str.length() };
	if (strLength == forbidden_length)
	{
		throw bad_length("�� ����� ����� ��������� �����!");
	}
	return strLength;
}