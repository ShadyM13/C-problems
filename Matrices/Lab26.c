#include <stdio.h>

#define ROW 3
#define COL 3

int main(void)
{
    int mat1[ROW][COL];
    int mat2[ROW][COL];
    int mat3[ROW][COL];

    int i=0, j=0;
    int res = 0;

    printf("Enter the elements of matrix 1: ");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",(*(mat1+j)+i));
        }
    }
    printf("Enter the elements of matrix 2: ");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",(*(mat2+j)+i));
        }
    }

    for(i=0; i<ROW; i++)
    {
        res = 0;
        for(j=0; j<COL; j++)
        {
            res = res + ( *(*(mat1+j)+i) * *(*(mat2+i)+j));
        }
        mat3[i][j] = res;

    }

    printf("matrix 3 = ");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%d ",*(*(mat3+j)+i));
        }
        printf("\n");
    }

    return 0;
}