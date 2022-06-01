#include <stdio.h>

#define     MAX_SIZE    100

int main(void)
{
    int N,i;
    int arr[MAX_SIZE];

    printf("Enter size of the array: ");
    scanf("%d",&N);
    
    for(i=0; i<=N; i++)
    {
        scanf("%d",(arr+i));
        //scanf("%d",&arr[i]);
    }

    for(i=0; i<=N; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d ",arr[i]);
            //printf("%d ",*(arr+i));
        }
        
    }
    return 0;
}