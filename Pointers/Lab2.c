#include <stdio.h>

int main(void)
{
    float num1,num2,sum;
    float* ptr1 = &num1;
    float* ptr2 = &num2;

    printf("Input num1: ");
    scanf("%f",ptr1);
    printf("Input num2: ");
    scanf("%f",ptr2);


    printf("Sum = %.2f\n",*ptr1 + *ptr2);
    printf("Dif = %.2f\n",*ptr1 - *ptr2);
    printf("product = %.2f\n",*ptr1 * *ptr2);
    printf("Division = %.2f\n",*ptr1 / *ptr2);
    return 0;
}