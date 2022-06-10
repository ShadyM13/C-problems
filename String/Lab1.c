#include <stdio.h>

int main(void)
{
    char str[100];
    int i, count = 0;

    printf("Enter any string: ");
    gets(str);

    while(*(str+i)!='\0')
    {
        count++;
        i++;
    }
    printf("length of the string = %d\n",count);


    return 0;
}