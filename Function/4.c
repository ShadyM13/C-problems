#include <stdio.h>

void isEven(int num);

int main(void)
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    isEven(num);

    return 0;
}

void isEven(int num)
{
    if(num % 2 == 0)
    {
        printf("%d is even\n",num);
    }
    else
    {
        printf("%d is odd\n",num);
    }

}