#include <stdio.h>

#define     CLEAR_BIT(num,bit)      num = num & ~(1<<bit)
#define     GET_BIT(num,bit)        ((num>>bit) & 1)

int main(void)
{
    int num, bit;
    int size = sizeof(int)*8;

    printf("Enter any num: ");
    scanf("%d",&num);

    for(int i=size; i>=0; i--)
    {
        if(GET_BIT(num,i) == 1)
        {
            bit = i;
        }
    }

    printf("Lowest set bit in the number = %d\n", bit );

    return 0;
}