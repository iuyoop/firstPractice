#include "array.h"

ARR errorAray(void)
{
	ARR arr;
	arr.rows = ROWS;
	arr.el = EL;
	arr.array = (int*)malloc((arr.rows * arr.el) * sizeof(int));

	if (arr.array == NULL)
		printf(" --> Ошибка выделения памяти\n");
	else
		printf(" --> Память выделена\n\n");
	return arr;
}

void inputArray(ARR a)
{
	for (int i = 0; i < (a.rows * a.el); i++)
		a.array[i] = i;
	printf(" --> Массив заполнен аргументами от 0 до %d\n\n", ((ROWS*EL)-1));
}

void printArray(ARR a) 
{
	printf(" --> [");
	for (int i = 0; i < ROWS; i++) 
	{
		printf("( ");
		for (int j = 0; j < EL; j++) 
			printf("%d ", a.array[i * EL + j]);
		printf(")");
	}
	printf("]\n\n");
}

void delАrray(ARR a)
{
	free(a.array);
	printf(" -- > Массив очищен\n\n");
}