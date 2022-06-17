#include <stdio.h>

void LSB_check(int num);
void MSB_check(int num);

int main(void)
{   
    int num;

    while(1)
    {
        printf("Enter any number: ");
        scanf("%d",&num);

        LSB_check(num);
        MSB_check(num);
    }
    

    return 0;
}

void LSB_check(int num)
{
    if((num & 1) == 1)
    {
        printf("LSB is set\n");
    }
    else
    {
        printf("LSB is not set\n");
    }
}

void MSB_check(int num)
{
    int size = sizeof(int)*8;
    if(((num>>size-1) & 1) == 1)
    {
        printf("MSB is set\n");
    }
    else
    {
        printf("MSB is not set\n");
    }
}