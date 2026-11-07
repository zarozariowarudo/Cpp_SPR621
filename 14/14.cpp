#include <iostream>
using namespace std;

void dynamicArr()
{
	const int size = 10;
	int* parr = (int*)malloc(sizeof(int) * size);
	free(parr);
}

void addEl(int **arr, int* size, int newEl)
{
	(*size)++;
	int* newArr = (int*)malloc(sizeof(int) * *size);

	for (int i = 0; i < *size - 1; i++)
	{
		newArr[i] = (*arr)[i];
	}

	newArr[*size - 1] = newEl;
	free(*arr);
	*arr = newArr;
}

int main()
{
	int* pa = new int(3);
	// int *pa = (int) malloc(sizeof(int));

	delete pa;
	//free(pa);

	return 0;
}