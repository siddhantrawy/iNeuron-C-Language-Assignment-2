// Write a program to take a three digit number from the user and rotate its digits by one position towards the right.

#include<stdio.h>

int main()
{
    int num, new_num;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    new_num=100*(num%10);
    num=num/10;
    new_num=new_num+num;
    printf("Number after one digit rotation towards right is %d",new_num);

    return 0;
}