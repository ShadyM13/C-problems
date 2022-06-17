#include <stdio.h>

#define     CLEAR_BIT(num,bit)      num = num & ~(1<<bit)

int main(void)
{
    int num, bit;
    printf("Enter any num: ");
    scanf("%d",&num);
    printf("Enter the bit you want to clear: ");
    scanf("%d",&bit);

    
    CLEAR_BIT(num,bit);

    printf("The number after clearing the %dth bit = %d\n",bit,num);


    return 0;
}