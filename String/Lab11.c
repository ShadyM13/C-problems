#include <stdio.h>

int main(void)
{
    char str1[100];
    char str2[100];
    int i, count = 0;

    printf("Enter any string: ");
    gets(str1);
    
    while(*(str1+i)!='\0')
    {
        count++;
        i++;
    }
    printf("size of text = %d\n",count);
    for(i=0; i<=count; i++)
    {
        *(str2+count-i-1) = *(str1+i);
    }

    printf("text 1: %s\n",str1);
    printf("text 2: %s\n",str2);

    return 0;
}