#include <stdio.h>

int cube(int num);

int main(void)
{
    int num, result;
    printf("Enter any number: ");
    scanf("%d",&num);
    result = cube(num);
    printf("cube of number: %d",result);

    return 0;
}

int cube(int num)
{
    return num*num*num;
}
