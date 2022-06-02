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

    printf("Enter the position to delete from: ");
    scanf("%d",&pos);

    for(i=pos-1; i<= size; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;

    printf("Elements of the array: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
