#include <stdio.h>

int max(int num1, int num2);
int min(int num1, int num2);

int main(void)
{
    int num1, num2;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);

    printf("Maximum number is %d\n",max(num1,num2));
    printf("Minimum number is %d\n",min(num1,num2));


    return 0;
}

int max(int num1, int num2)
{
    return (num1 > num2)? num1 : num2;
}
int min(int num1, int num2)
{
    return (num1 < num2)? num1 : num2;
}