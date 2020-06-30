#include <stdio.h>
void print2DArray(int arr[][5], int col, int row)
{
	int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    int numArr[2][5] = {
        { 1, 2, 3, 4, 5 },
        { 6, 7, 8, 9, 10 }
    };

    int col = sizeof(numArr[0]) / sizeof(int);

    int row = sizeof(numArr) / sizeof(numArr[0]);
    print2DArray(numArr, col, row);

    return 0;
}
