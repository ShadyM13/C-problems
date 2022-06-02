#include <stdio.h>

int main(void)
{

    int size,sum,i,pos,new;
    int arr[100];

    printf("Enter size of the array: ");
    scanf("%d",&size);
    printf("Enter elements of the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d",&new);
    printf("Enter the position to insert in: ");
    scanf("%d",&pos);

    for(i=size; i>= pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = new;
    size++;

    printf("Elements of the array: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}