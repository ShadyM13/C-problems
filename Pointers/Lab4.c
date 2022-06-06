#include <stdio.h>


int main(void)
{
    int arr[100];
    int size,i;

    int* ptr = arr;

    printf("Enter number of elements of the array: ");
    scanf("%d",&size);
    printf("Enter elements of the array: ");
    
    for(i= 0; i<size; i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("___________________________________________\n");
    printf("Elements of the array: ");
    for(i= 0; i<size; i++)
    {
        printf("%d \n",*(ptr+i));
    }

    return 0;
}