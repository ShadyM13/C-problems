#include <stdio.h>

#define     GET_BIT(num,bit)        ((num>>bit) & 1)

int main(void)
{
    int num, i, ones = 0, zeros=0;
    int size = sizeof(int)*8;

    printf("Enter any  number: ");
    scanf("%d",&num);
    
    for(i=0; i<size; i++)
    {
        if(GET_BIT(num,i))
        {
            ones++;
        }
        else
        {
            zeros++;
        }
    }

    printf("Number of ones in number %d = %d\n",num,ones);
    printf("Number of zeros in number %d = %d\n",num,zeros);

    
    return 0;
}