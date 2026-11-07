#include <iostream>
using namespace std;

void createDynArr(int** arr, const int &size)
{
	if (*arr != nullptr) return;

	*arr = (int*)malloc(sizeof(int) * size);
}

void fillDynArr(int** arr, const int &size)
{
	for (int i = 0; i < size; i++)
	{
		(*arr)[i] = rand() % 50;
	}
}

void showDynArr(int* arr, const int& size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void deleteLast(int** arr, int& size)
{
	if (size == 0 || *arr == nullptr || arr == nullptr) return;

	size--;

	if (size == 0)
	{
		free(arr);
		*arr = nullptr;
		return;
	}

	int* newArr = (int*)realloc(*arr, sizeof(int) * size);

	if (newArr != nullptr)
		*arr = newArr;
}

bool insertArr(int** arr, int& size, 
				const int& newEl, const int &position)
{
	if (position < 0 || position > size || arr == nullptr)
		return false;

	int* temp = (int*)malloc(sizeof(int) * (size + 1));

	for (int i = 0; i < position; i++)
	{
		temp[i] = (*arr)[i];
	}

	temp[position] = newEl;
	
	for (int i = position; i < size; i++)
	{
		temp[i + 1] = (*arr)[i];
	}

	if (temp != nullptr)
	{
		free(*arr);
		*arr = temp;
		size++;
		return true;
	}
	return false;
}

int main()
{
	srand(time(NULL));

	int* pa = (int*)malloc(sizeof(int));
	int* pb = (int*)malloc(sizeof(int));
	int* pc = (int*)malloc(sizeof(int));

	cout << "Mult: " << *pa * *pb * *pc << endl;
	cout << "a: " << *pa << endl;
	cout << "b: " << *pb << endl;
	cout << "c: " << *pc << endl;

	return 0;
}
