// Write a program to swap values of two int variables

#include<stdio.h>

int main()
{
    int num1, num2, t;
    printf("Enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter value of num2: ");
    scanf("%d",&num2);
    t=num1;
    num1=num2;
    num2=t;
    printf("num1 = %d and num2 = %d",num1, num2);
    return 0;
}