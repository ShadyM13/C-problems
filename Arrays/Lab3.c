#include <stdio.h>

#define     MAX_SIZE    100

int main(void)
{
    int arr[MAX_SIZE];
    int N,i,sum = 0;
    printf("Enter size of an array: ");
    scanf("%d",&N);
    printf("Enter Elemetns of the array: ");
    for(i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    
    printf("Sum of the all elements of array = %d\n",sum);

    return 0;
}