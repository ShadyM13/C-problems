#include <stdio.h>

#define     CLEAR_BIT(num,bit)      num = num & ~(1<<bit)
#define     GET_BIT(num,bit)        ((num>>bit) & 1)

int main(void)
{
    int num, bit, trailing_zeros = 0;
    int size = sizeof(int)*8;

    printf("Enter any num: ");
    scanf("%d",&num);

    for(int i=0; i<size; i++)
    {
        if(GET_BIT(num,i) == 1)         //break the loop as soon as you find a one
        {
            break;
        }

        trailing_zeros++;               //increment the zero counter
    }
    printf("Number of trailing zeros in number %d = %d\n", num, trailing_zeros );


    return 0;
}