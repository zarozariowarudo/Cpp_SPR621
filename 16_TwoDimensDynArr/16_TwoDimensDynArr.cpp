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

int** AddRowEnd(int** arr, int* rows, int cols)
{
    int** temp = (int**)malloc(sizeof(int*) * (*rows + 1));

    for (int i = 0; i < *rows; i++)
        temp[i] = arr[i];

    temp[*rows] = (int*)malloc(sizeof(int) * cols);
    fillRow(temp[*rows], cols);
    (*rows)++;
    free(arr);
    return temp;
}

int** AddRowByPos(int** arr, int* rows, int cols, int pos)
{
    int** temp = (int**)malloc(sizeof(int*) * (*rows + 1));

    for (int i = 0; i < pos; i++)
        temp[i] = arr[i];

    temp[pos] = (int*)malloc(sizeof(int) * cols);
    fillRow(temp[pos], cols);

    for (int i = pos + 1; i <= *rows; i++)
        temp[i] = arr[i - 1];

    free(arr);
    (*rows)++;
    return temp;
}

int** AddColEnd(int** arr, int rows, int* cols)
{
    int** temp = (int**)malloc(sizeof(int*) * (rows));
    for (int i = 0; i < rows; i++)
    {
        temp[i] = (int*)malloc(sizeof(int) * (*cols + 1));
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < (*cols); j++)
        {
            temp[i][j] = arr[i][j];
        }
    }

    delete2DynArr(arr, rows, *cols);
    for (int i = 0; i < rows; i++)
        temp[i][*cols] = 5;

    (*cols)++;
    return temp;
}

int** DeleteRowEnd(int** arr, int* rows, int cols)
{
    int** temp = (int**)malloc(sizeof(int*) * (*rows - 1));
    for (int i = 0; i < *rows - 1; i++)
        (temp)[i] = arr[i];

    free(arr[*rows - 1]);
    free(arr);
    (*rows)--;
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
    parr = AddRowEnd(parr, &rows, cols);
    parr = AddColEnd(parr, rows, &cols);
    ShowArray(parr, rows, cols);
    delete2DynArr(parr, rows, cols);

	return 0;
}
