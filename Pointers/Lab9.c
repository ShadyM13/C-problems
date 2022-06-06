#include <stdio.h>

#define ROWS 3
#define COLS 3

void inputMatrix(int matrix[][COLS], int rows, int cols);
void printMatrix(int matrix[][COLS], int rows, int cols);

int main(void)
{
    int matrix[ROWS][COLS];

    printf("Enter the 3x3 array elements: ");
    inputMatrix(matrix, ROWS, COLS);

    printf("The 3x3 array elements are: ");
    printMatrix(matrix, ROWS, COLS);


    return 0;
}

void inputMatrix(int matrix[][COLS], int rows, int cols)
{
    int i,j;
    for(i=0; i<ROWS; i++)
    {
        for(j=0; j<COLS; j++)
        {
            // (*(matrix + i) + j is equivalent to &matrix[i][j]
            scanf("%d",(*(matrix+i)+j));
        }
    }
}
void printMatrix(int matrix[][COLS], int rows, int cols)
{
    int i,j;
    for(i=0; i<ROWS; i++)
    {
        for(j=0; j<COLS; j++)
        {
            // *(*(matrix + i) + j) is equivalent to matrix[i][j]
            printf("%d ",*(*(matrix+i)+j));
        }
        printf("\n");
    }
}