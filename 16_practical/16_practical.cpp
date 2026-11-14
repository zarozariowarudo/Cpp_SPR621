#include <stdio.h>
#include <stdlib.h>

void delete2DynArr(int** parr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		free(parr[i]);
	}
	free(parr);
}

int** init2DynArr(int rows, int cols)
{
	int** parr = (int**)malloc(sizeof(int*) * rows);

    if (parr == NULL)
        return NULL;

	for (int i = 0; i < rows; i++)
	{
		parr[i] = (int*)malloc(sizeof(int) * cols);

        if (parr == NULL)
            return NULL;
	}
    return parr;
}

void RandArray(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
}

void ShowArray(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            printf("%5d ", arr[i][j]);
        }
        printf("\n");
    }
}

void fillRow(int* arr, int cols)
{
    for (int i = 0; i < cols; i++) 
        arr[i] = rand() % 10;
}

int** AddRowStart(int** arr, int* rows, int cols)
{
    int** temp = (int**)malloc(sizeof(int*) * (*rows + 1));
    temp[0] = (int*)malloc(sizeof(int) * cols);
    fillRow(temp[0], cols);

    for (int i = 0; i < *rows; i++)
        temp[i + 1] = arr[i];

    fillRow(temp[*rows], cols);
    (*rows)++;
    free(arr);
    return temp;
}

int** DeleteRowStart(int** arr, int* rows, int cols)
{
    int** temp = (int**)malloc(sizeof(int*) * (*rows - 1));
    for (int i = 0; i < *rows - 1; i++)
        (temp)[i] = arr[i + 1];

    free(arr[0]);
    free(arr);
    (*rows)--;
    return temp;
}

int** DeleteRowByPos(int** arr, int* rows, int cols, int pos)
{
    int** temp = (int**)malloc(sizeof(int*) * (*rows - 1));

    for (int i = 0; i < pos; i++)
        temp[i] = arr[i];

    for (int i = pos + 1; i < *rows; i++)
        temp[i-1] = arr[i];

    free(arr[pos]);
    free(arr);
    (*rows)--;
    return temp;
}

// - hw
int** AddColStart(int** arr, int rows, int* cols, int num)
{
    int** temp = (int**)malloc(sizeof(int*) * (rows));
    for (int i = 0; i < rows; i++)
    {
        temp[i] = (int*)malloc(sizeof(int) * (*cols + 1));
    }
    
    for (int i = 0; i < rows; i++)
        temp[i][0] = num;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < (*cols); j++)
        {
            temp[i][j+1] = arr[i][j];
        }
    }

    delete2DynArr(arr, rows, *cols);
    
    (*cols)++;
    return temp;
}

int main()
{
    int rows = 5;
    int cols = 5;
    int** parr = NULL;

    parr = init2DynArr(rows, cols);

    if (parr == NULL) return -1;

    RandArray(parr, rows, cols);
    ShowArray(parr, rows, cols);
    printf("\n");
    parr = AddRowStart(parr, &rows, cols);
    parr = DeleteRowStart(parr, &rows, cols);
    parr = DeleteRowByPos(parr, &rows, cols, 2);
    parr = AddColStart(parr, rows, &cols, 2);
    ShowArray(parr, rows, cols);
    delete2DynArr(parr, rows, cols);

	return 0;
}