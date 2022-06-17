#include <stdio.h>

void Check_bit(int num, int bit);

int main(void)
{   
    int num, bit;

    while(1)
    {
        printf("Enter any number: ");
        scanf("%d",&num);
        printf("Enter bit to check (0-31): ");
        scanf("%d",&bit);

        Check_bit(num,bit);
    }
    

    return 0;
}

void Check_bit(int num, int bit)
{
    if(((num>>bit) & 1) == 1)
    {   
        printf("%d'th bit is set.\n",bit);
    }
    else
    {
        printf("%d'th bit is not set.\n",bit);
    }
}