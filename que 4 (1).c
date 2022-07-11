#include<stdio.h>
#include<conio.h>

int main()
{
    float r, a;
    printf("Enter the radius value: ");
    scanf("%f", &r);

    a = 3.14*r*r;

    printf("Area of circle is %f having the radius %f.",a,r);
    return 0;
}
