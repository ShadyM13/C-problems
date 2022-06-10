#include <stdio.h>

int main(void)
{
    char str1[100];
    char str2[100];
    int i, count;

    printf("Enter any text: ");
    gets(str1);

    while(*(str1+i) != '\0')
    {
        *(str2+i) = *(str1+i);
        count++;
        i++;
    }

    printf("The size of both strings = %d\n",count-1);
    printf("%s\n",str1);
    printf("%s\n",str2);


    return 0;
}