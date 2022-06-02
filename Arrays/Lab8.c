#include <stdio.h>

int main(void)
{
    int arr1[100];
    int arr2[100];
    int temp[100];
    int size, i;

    printf("Enter size of an array: ");
    scanf("%d",&size);
    printf("Enter Elements of the first array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter Elements of the first array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr2[i]);
    }

    printf("Elements of the first array: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    printf("Elements of the second array: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");


    for(i=0; i<size; i++)
    {
        temp[i] = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp[i];
    }

    printf("Elements of the first array after reversing: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    printf("Elements of the second array after reversing: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");

    return 0;
}