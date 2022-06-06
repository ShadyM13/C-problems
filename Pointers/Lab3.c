#include <stdio.h>

void swap(int* ptr1, int* ptr2);

int main(void)
{   
    int num1,num2;
    int* ptr1 = &num1;
    int* ptr2 = &num2;

    printf("Input num1: ");
    scanf("%d",ptr1);
    printf("Input num2: ");
    scanf("%d",ptr2);

    swap(ptr1, ptr2);

    printf("num1 = %d\n",*ptr1);
    printf("num2 = %d\n",*ptr2);

    return 0;
}

void swap(int* ptr1, int* ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}