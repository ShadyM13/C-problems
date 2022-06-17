#include <stdio.h>

#define     CLEAR_BIT(num,bit)          num = num & ~(1<<bit)
#define     GET_BIT(num,bit)            ((num>>bit) & 1)
#define     TOGGLE_BIT(num,bit)         num = num ^ (1<<bit)

int main(void)
{
    int num, bit, leading_zeros = 0, flipped;
    int size = sizeof(int)*8;

    printf("Enter any num: ");
    scanf("%d",&num);

    flipped = ~num;
 
    printf("Number %d after toggling all its bits = %d\n", num, flipped );       


    return 0;
}