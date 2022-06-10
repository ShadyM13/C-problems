#include <stdio.h>

int main(void)
{
    char str1[100];
    char str2[100];
    char str3[200];

    int i, size1 = 0, size2 = 0, size3 = 0;

    printf("Enter text 1: ");
    gets(str1);
    printf("Enter text 2: ");
    gets(str2);

    while(*(str1+i) != '\0')
    {
        size1++;
        i++;
    }

    printf("size 1 = %d\n",size1);

    i = 0;
    while(*(str2+i) != '\0')
    {
        size2++;
        i++;
    }

    printf("Size 2 = %d\n",size2);
    i=0;

    size3 = size1 + size2;

    for(i=0; i<size3; i++)
    {
        if(i<size1)
        {
            *(str3+i) = *(str1+i);
        }
        else if(i == size1)
        {
            *(str3+i) = ' ';
        }
        else
        {
            *(str3+i) = *(str2+i-size1-1);
        }
    }

    printf("Text 1 : %s\n",str1);
    printf("Text 2 : %s\n",str2);
    printf("Text 3 : %s\n",str3);


    return 0;
}