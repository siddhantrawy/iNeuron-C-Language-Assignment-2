// Write a program to input a three digit number and display the sum of the digits.

#include<stdio.h>

// int main()
// {
//     int num, sum=0, x, y, z;
//     printf("Enter a three digit number: ");
//     scanf("%d",&num);
//     x=num%10;
//     y=(num/10)%10;
//     z=(num/10)/10;
//     sum=x+y+z;
//     printf("Sum of digits of the number %d is %d",num,sum);
//     return 0;
// }

int main()
{
    int num, sum=0;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    sum=num%10;
    num=num/10;
    sum=(num%10)+sum;
    num=num/10;
    sum=num+sum;
    printf("Sum of digits is %d",sum);
    return 0;
}