#include <stdio.h>

int main(void)
{
    int rotation, i, temp = 0, j;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Enter number of rotations: ");
    scanf("%d",&rotation);

    for(j=0; j<rotation; j++)
    {
        temp = arr[0];
        for(i=0; i<size; i++)
        {
            arr[i] = arr[i+1];  
        }
        arr[size-1] = temp;

    }

    printf("Array after rotations: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}