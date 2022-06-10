#include <stdio.h>

int main(void)
{
    char str[100];
    int count = 0, i = 0;

    printf("Enter any text: ");
    gets(str);

    while(*(str+i) != '\0')
    {
        count++;
        i++;
    }

    for(i=0; i<count-1; i++)
    {
        if(*(str+i) != *(str+count-i-1))
        {
            break;
        }
        else
        {

        }
    }
    if(i<count-1)
    {
        printf("Not mirror\n");
    }
    else
    {
        printf("Mirror\n");
    }

    return 0;
}