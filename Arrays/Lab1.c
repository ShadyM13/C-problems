#include <stdio.h>

#define MAX 100

int main(void)
{   
    int size, i;
    int arr[MAX];
    printf("Enter size of the array: ");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Elements of the array are: \n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}