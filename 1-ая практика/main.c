#include "array.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	int ch1 = 0,ch2 = 0, ch3 = 0;
	char us;

	ARR array;
	printf(" Колл-во cтрок: %d\n", ROWS);
	printf(" Колл-во элем-ов в каждой строке: %d\n", EL);
	printf(" Колл-во элементов в массиве: %d\n\n", (ROWS * EL));

	while (ch1 == 0)
	{
		printf(" Какую ф-ию использовать?\n Выделения памяти - m(memory)\n Ввод данных в массив - i(input)\n Вывод данных массива - p(print)\n Очищение массива - c(clear)\n Выход из программы - o(out)\n --> ");
		scanf_s(" %c", &us);

		switch (us)
		{
			case('m'):
				system("cls");
				array = errorAray();
				ch2 = 1;
				us = 0;
				break;
	
			case('i'):
				if (ch2 == 1)
				{
					system("cls");
					inputArray(array);
					ch3 = 1;
				}
				else
				{
					system("cls");
					printf(" --> Сначала нужно выделить память под массив\n\n");
				}
				us = 0;
				break;

			case('p'):
				if ((ch2 == 1) && (ch3 == 1))
				{
					system("cls");
					printArray(array);
				}
				else if ((ch2 == 0) && (ch3 == 0))
				{
					system("cls");
					printf(" --> Сначала нужно выделить память под массив и заполнить его\n\n");
				}
				else if ((ch2 == 1) && (ch3 == 0))
				{
					system("cls");
					printf(" --> Сначала нужно заполнить массив\n\n");
				}
				us = 0;
				break;

			case('c'):
				if ((ch2 == 1) && (ch3 == 1))
				{
					system("cls");
					delАrray(array);
					ch2 = 0;
					ch3 = 0;
				}
				else if ((ch2 == 0) && (ch3 == 0))
				{
					system("cls");
					printf(" --> Сначала нужно выделить память под массив и заполнить его\n\n");
				}
				else if ((ch2 == 1) && (ch3 == 0))
				{
					system("cls");
					printf(" --> Сначала нужно заполнить массив\n\n");
				}
				us = 0;
				break;

			case('o'):
				ch1++;
				us = 0;
				break;

			default:
				system("cls");
				printf(" --> Некоректный ввод\n\n");
				us = 0;
				break;
		}
	}
	return 0;
}