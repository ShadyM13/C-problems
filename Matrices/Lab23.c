#include <stdio.h>

#define ROW 3
#define COL 3

int main(void)
{
    int mat1[ROW][COL];
    int mat2[ROW][COL];
    int mat3[ROW][COL];

    int i,j;

    printf("Enter the values of Matrix 1: ");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",(*(mat1+j)+i));
        }
    }

    printf("Enter the values of Matrix 2: ");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",(*(mat2+j)+i));
        }
    }

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            *(*(mat3+j)+i) = *(*(mat1+j)+i) + *(*(mat2+j)+i);
        }
    }

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