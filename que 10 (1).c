#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int x, y, z;
    printf("Enter the date in DD/MM/YYYY format: ");
    scanf("%d/%d/%d",&x, &y, &z);
    printf("Day - %d, Month - %d, Year - %d",x, y, z);
    return 0;
}
