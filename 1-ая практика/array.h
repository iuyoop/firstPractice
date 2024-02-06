#include <stdio.h>
#include <locale.h>
#include <malloc.h>
#include <stdlib.h>

#define ROWS 2
#define EL 7

typedef struct {
	int* array;
	int rows;
	int el;
}ARR;

ARR errorAray(void);

void inputArray(ARR a);

void printArray(ARR a);

void del¿rray(ARR a);