#include <stdio.h>

int main(void)
{
    int num = 10;
    int* ptr = &num;
    *ptr = 20;
    printf("Enter new value of x: ");
    scanf("%d",ptr);

    printf("Address of num = %d\n", &num);
    printf("Value of num = %d\n", num);
    printf("Address of ptr = %d\n", &ptr);
    printf("Value of ptr = %d\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);
    printf("Value of x = %d",*ptr);


    return 0;
}