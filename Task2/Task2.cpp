﻿/*
В этом задании вы запретите создавать экземпляры классов геометрических фигур с неправильными данными.

Создайте собственный класс исключения для ошибки создания геометрической фигуры. 
Подумайте, от какого типа его унаследовать, и не забудьте поместить новый класс в отдельную пару файлов.

Возьмите иерархию классов из предыдущего задания. Теперь при создании экземпляров классов вам нужно проверять аргументы, которые поступают на вход конструктору. 
Если аргументы не соответствуют ограничениям, объект не должен быть создан, а на консоль должно быть выведено соответствующее сообщение. 
Причина ошибки должна быть сформулирована на уровне конструктора и выведена на экран при обработке ошибок.

Ограничения:

треугольник (стороны и углы произвольные, количество сторон равно 3, сумма углов равна 180);
прямоугольный треугольник (угол C всегда равен 90);
равнобедренный треугольник (стороны a и c равны, углы A и C равны);
равносторонний треугольник (все стороны равны, все углы равны 60);
четырёхугольник (стороны и углы произвольные, количество сторон равно 4, сумма углов равна 360);
прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);
квадрат (все стороны равны, все углы равны 90);
параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);
ромб (все стороны равны, углы A,C и B,D попарно равны).
Для проверки попробуйте создать разные геометрические фигуры — правильные и неправильные. 
В случае успешного создания выводите на экран сообщение об успешном создании и параметры фигуры. 
В случае, если создание не удалось, выведите причину ошибки.

*/

#include "Header.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	try
	{
		Triangle triangle;
		std::cout << triangle.toString() << " создан\n";

		//Triangle triangle2{10, 20, 30, 50, 60, 60};	// Треугольник с ошибкой
		//std::cout << triangle2.toString() << " создан\n";

		RectangularTriangle rectTriangle(10, 20, 30, 30, 60);
		std::cout << rectTriangle.toString() << " создан\n";

		//RectangularTriangle rectTriangle2;	// Прямоугольный треугольник с ошибкой
		//std::cout << rectTriangle2.toString() << " создан\n";

		IsoscelesTriangle isoTriangle(10, 30, 45, 90);
		std::cout << isoTriangle.toString() << " создан\n";

		//IsoscelesTriangle isoTriangle2;	// Равнобедренный треугольник с ошибкой
		//std::cout << isoTriangle2.toString() << " создан\n";

		PerfectTriangle perfectTriangle;
		std::cout << perfectTriangle.toString() << " создан\n";

		Quadrangle quadrangle(10, 20, 30, 40, 80, 90, 100, 90);
		std::cout << quadrangle.toString() << " создан\n";

		//Quadrangle quadrangle2;	// Четырёхугольник с ошибкой
		//std::cout << quadrangle2.toString() << " создан\n";

		Rectangle rectangle;
		std::cout << rectangle.toString() << " создан\n";

		Quadrate quadrate;
		std::cout << quadrate.toString() << " создан\n";

		Parallelogram parallelogram(10, 20, 100, 80);
		std::cout << parallelogram.toString() << " создан\n";

		//Parallelogram parallelogram2;	// Параллелограм с ошибкой
		//std::cout << parallelogram2.toString() << " создан\n";

		Rhombus rhombus(10, 120, 60);
		std::cout << rhombus.toString() << " создан\n";

		//Rhombus rhombus2;	// Ромб с ошибкой
		//std::cout << rhombus2.toString() << " создан\n";
	}
	catch (const FigureError& error)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << error.what();
		exit(EXIT_FAILURE);
	}

	return EXIT_SUCCESS;
}
