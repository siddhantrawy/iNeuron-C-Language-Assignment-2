// Write a program to print a given number without its last digit

#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y = x/10;
    printf("Number without its last digit is %d",y);
    return 0;
}