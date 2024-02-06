#include "array.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	int ch1 = 0,ch2 = 0, ch3 = 0;
	char us;

	ARR array;
	printf(" ����-�� c����: %d\n", ROWS);
	printf(" ����-�� ����-�� � ������ ������: %d\n", EL);
	printf(" ����-�� ��������� � �������: %d\n\n", (ROWS * EL));

	while (ch1 == 0)
	{
		printf(" ����� �-�� ������������?\n ��������� ������ - m(memory)\n ���� ������ � ������ - i(input)\n ����� ������ ������� - p(print)\n �������� ������� - c(clear)\n ����� �� ��������� - o(out)\n --> ");
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
					printf(" --> ������� ����� �������� ������ ��� ������\n\n");
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
					printf(" --> ������� ����� �������� ������ ��� ������ � ��������� ���\n\n");
				}
				else if ((ch2 == 1) && (ch3 == 0))
				{
					system("cls");
					printf(" --> ������� ����� ��������� ������\n\n");
				}
				us = 0;
				break;

			case('c'):
				if ((ch2 == 1) && (ch3 == 1))
				{
					system("cls");
					del�rray(array);
					ch2 = 0;
					ch3 = 0;
				}
				else if ((ch2 == 0) && (ch3 == 0))
				{
					system("cls");
					printf(" --> ������� ����� �������� ������ ��� ������ � ��������� ���\n\n");
				}
				else if ((ch2 == 1) && (ch3 == 0))
				{
					system("cls");
					printf(" --> ������� ����� ��������� ������\n\n");
				}
				us = 0;
				break;

			case('o'):
				ch1++;
				us = 0;
				break;

			default:
				system("cls");
				printf(" --> ����������� ����\n\n");
				us = 0;
				break;
		}
	}
	return 0;
}