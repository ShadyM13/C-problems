#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char text1[100];
    char text2[100];
    char* ptr1 = text1;
    char* ptr2 = text2;
    int i = 0;

    printf("Enter text 1: ");
    gets(ptr1);

    while(*(ptr1+i) != '\0')
    {
        *(ptr2+i) = *(ptr1+i);
        i++;
    }

    printf("Text 1 : %s\n",ptr1);
    printf("Text 2 : %s\n",ptr2);

    return 0;
}