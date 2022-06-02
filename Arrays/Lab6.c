#include <stdio.h>

int main(void)
{
    int arr[100];
    int size,sum,i,N;
    int odd,even;

    printf("Enter size of an array: ");
    scanf("%d",&size);
    printf("Enter elements of an array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",(arr+i));
    }

    odd =  0;
    even = 0;

    for(i=0; i<size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("even numbers in the array = %d\n",even);
    printf("odd numbera in the array = %d\n",odd);

    return 0;
}