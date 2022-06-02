#include <stdio.h>

int main(void)
{
    int arr[100];
    int size,sum,i;

    printf("Enter size of an array: ");
    scanf("%d",&size);
    printf("Enter elements of an array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",(arr+i));
    }

    sum = 0;

    for(i=0; i<size; i++)
    {
        if(arr[i] < 0)
        {
            sum++;
        }

    }

    printf("sum of negative number = %d\n",sum);


    return 0;
}