#include <stdio.h>

#define ROWS 3
#define COLS 3

void inputMatrix(int matrix[ROWS][COLS]);
void Addition(int result[ROWS][COLS], int matrix1[ROWS][COLS], int matrix2[ROWS][COLS]);
void printMatrix(int matrix[][COLS]);

int main(void)
{
    int mat1[ROWS][COLS];
    int mat2[ROWS][COLS];
    int result[ROWS][COLS];

    int* ptr1 = mat1;
    int* ptr2 = mat2;
    int* res = result;

    printf("Enter elements of matrix 1: ");
    inputMatrix(mat1);
    printf("Enter elements of matrix 2: ");
    inputMatrix(mat2);

    Addition(res, mat1, mat2);

    printMatrix(res);

    







    return 0;
}

void inputMatrix(int matrix[ROWS][COLS])
{
    int i,j;

    for(i=0; i<ROWS; i++)
    {
        for(j=0; j<COLS; j++)
        {
            scanf("%d",(*(matrix+i)+j));
        }
    }
}

void Addition(int result[ROWS][COLS], int matrix1[ROWS][COLS], int matrix2[ROWS][COLS])
{
    int i,j;
    for(i=0; i<ROWS; i++)
    {
        for(j=0; j<COLS; j++)
        {
            *(*(result+i)+j) = *(*(matrix1+i)+j) + *(*(matrix2+i)+j);
        }
    }
}

void printMatrix(int matrix[][COLS])
{
    int i,j;
    for(i=0; i<ROWS; i++)
    {
        for(j=0; j<COLS; j++)
        {
            printf("%d ",*(*(matrix+i)+j));
        }
        printf("\n");
    }
}