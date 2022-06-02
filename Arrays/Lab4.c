#include <stdio.h>

int main(void)
{
    int arr[100];
    int size,sum,i,N;
    int max, min;

    printf("Enter size of an array: ");
    scanf("%d",&size);
    printf("Enter elements of an array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",(arr+i));
    }

    max = arr[0];
    min = arr[0];

    for(i=1; i<size; i++)
    {
        if(arr[i]>arr[i-1])
        {
            max = arr[i];
        }
    }
    for(i=1; i<size; i++)
    {
        if(arr[i]<arr[i-1])
        {
            min = arr[i];
        }
    }
    printf("maximum number in the array = %d\n",max);
    printf("minimum number in the array = %d\n",min);

    return 0;
}