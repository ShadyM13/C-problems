#include <stdio.h>


int main(void)
{
    char text[100];
    char* ptr = text;
    int i = 0;
    int count = 0;

    printf("Enter any string: ");
    gets(ptr);  //or gets(text)

    while(*(ptr+i) != '\0')         //or you can get rid of i and use *(ptr++)
    {
        count++;
        i++;
    }

    printf("Length of the text = %d",count);

    return 0;
}