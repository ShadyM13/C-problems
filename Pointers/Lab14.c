#include <stdio.h>

int sizeofstr(char* ptr);

int main(void)
{
    int size1, size2, size3, i, j = 0;

    char text1[100];
    char text2[100];
    char text3[200];
    char* ptr1 = text1;
    char* ptr2 = text2;
    char* ptr3 = text3;

    printf("Enter text1: ");
    gets(ptr1);
    printf("Enter text2: ");
    gets(ptr2);

    size1 = sizeofstr(ptr1);
    size2 = sizeofstr(ptr2);

    size3 = size1 + size2;

    for(i=0 ; i<=size3; i++)
    {
        if(i < size1)
        {
            *(ptr3+i) = *(ptr1+i);
        }
        else if(i==size1)
        {
            *(ptr3+i) = ' ';
        }

        else
        {
            *(ptr3+i) = *(ptr2+j);
            j++;
        }
        
    }

    printf("Text 3: %s\n",ptr3);


    return 0;
}

int sizeofstr(char* ptr)
{
    int count = 0;
    int i=0;

    while(*(ptr+i) != '\0')
    {
        count++;
        i++;
    }
    return count;
}