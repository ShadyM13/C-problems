#include <stdio.h>

#define PI 3.145

int diameter(int rad);
int circumference(int rad);
int area(int rad);

int main()
{
    int rad;
    printf("Enter the radius of circle: ");
    scanf("%d",&rad);
    printf("Diameter = %d\n",diameter(rad));
    printf("Circumference = %d\n",circumference(rad));
    printf("Area = %d\n",area(rad));
    

    return 0;
}

int diameter(int rad)
{
    return 2*rad;
}
int circumference(int rad)
{
    return 2*PI*rad;
}
int area(int rad)
{
    return PI*rad*rad;
}