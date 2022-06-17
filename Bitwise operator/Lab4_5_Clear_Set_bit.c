#include <stdio.h>

int main(void)
{
    int num,bit, set_reset;

    printf("Enter any number: ");
    scanf("%d",&num);

    printf("Enter any bit to edit: ");
    scanf("%d",&bit);

    printf("press 1 to set and 0 to reset: ");
    scanf("%d",&set_reset);

    if(set_reset == 0)
    {
        num = num & ~(1<<bit);
    }
    else if(set_reset == 1)
    {
        num = num | (1<<bit);
    }

    printf("Number after editing is = %d",num);




}