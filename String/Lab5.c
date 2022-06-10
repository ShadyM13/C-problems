#include <stdio.h>

int main(void)
{
    char str[100];
    int i;
    int dif = 'a' - 'A';
    
    printf("enter any text: ");
    gets(str);
    
    printf("old text: %s\n",str);

    while(*(str+i) != '\0')
    {
        if(*(str+i) >= 'a' &&*(str+i) <= 'z')
        {
            *(str+i) = *(str+i) - 32;
        }
        i++; 
        
    }

    printf("new text: %s\n",str);

    return 0;
}