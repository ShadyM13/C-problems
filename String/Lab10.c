#include <stdio.h>

int main(void)
{
    char str[100];
    int i, count = 0;
    printf("Enter any text: ");
    gets(str);

    i=0;
    while(*(str+i) != '\0')
    {
        if(*(str+i) == ' ')
        {
            count++;
        }
        i++;
    }

    printf("Number of words in the text = %d\n", count+1);

    return 0;
}