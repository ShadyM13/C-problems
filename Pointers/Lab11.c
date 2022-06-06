#include <stdio.h>

#define ROWS 3
#define COLS 3

void inputmatrix(int matrix[ROWS][COLS]);
void product(int matrix1[ROWS][COLS],int matrix2[ROWS][COLS],int result[ROWS][COLS]);
void printing(int matrix[ROWS][COLS]);

int main(void)
{
    int mat1[ROWS][COLS];
    int mat2[ROWS][COLS];
    int res[ROWS][COLS];

    int* ptr1 = mat1;
    int* ptr2 = mat2;
    int* ptr3 = res;

    printf("Enter elements of matrix 1: ");
    inputmatrix(ptr1);
    printf("Enter elements of matrix 2: ");
    inputmatrix(ptr2);
    product(ptr1, ptr2, ptr3);

    printing(ptr3);



    return 0;
}

void inputmatrix(int matrix[ROWS][COLS])
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

void printing(int matrix[ROWS][COLS])
{
    int i,j;
    for(i=0; i<ROWS; i++)
    {
        for(j=0; j<COLS; j++)
        {
            printf("%d " , *(*(matrix+i)+j));
        }
        printf("\n");
    }

}

void product(int matrix1[ROWS][COLS],int matrix2[ROWS][COLS],int result[ROWS][COLS])
{
    int i,j;
    for(i=0; i<ROWS; i++)
    {
        for(j=0; j<COLS; j++)
        {
            *(*(result+i)+j) = *(*(matrix1+i)+j) * *(*(matrix2+j)+i); 
        }
    }
}

