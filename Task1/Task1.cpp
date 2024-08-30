/*
В этом задании вы попробуете выбросить и обработать исключение.

Создайте функцию int function(std::string str, int forbidden_length). 

Эта функция должна возвращать длину переданной строки, если эта длина не равна значению переданного параметра 

forbidden_length. В противном случае она должна выбрасывать исключение bad_length.

Для проверки функции организуйте работу с пользователем. В начале задайте запретную длину, 

а затем считывайте пользовательские строки и выводите их длину до тех пор, пока пользователь не введёт строку запретной длины. 

После этого сообщите ему, что он ввёл строку запретной длины, и завершите программу.
*/

#include <Windows.h>
#include "functions.h"
#include "bad_length.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите запретную длину: ";
	int forbidden_length{};
	std::cin >> forbidden_length;
	std::string word{};

	while (true)
	{
		try
		{
			std::cout << "Введите слово: ";
			//std::getline(std::cin, word);
			std::cin >> word;
			std::cout << "Длина слова \"" << word << "\" равна " << function(word, forbidden_length) << '\n';
		}
		catch (const bad_length& error)
		{
			std::cout << error.what() << " До свидания" << std::endl;
			exit(EXIT_SUCCESS);
		}
		catch (...)
		{
			std::cout << "Неизвестная ошибка!" << " До свидания" << std::endl;
			exit(EXIT_SUCCESS);
		}
	}

    return EXIT_SUCCESS;
}
