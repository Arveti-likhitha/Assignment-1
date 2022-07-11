#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int h, m;
    printf("Enter the time in HH:MM format: ");
    scanf("%d:%d", &h, &m);
    printf("%d hour and %d minute",h, m);
    return 0;
}
