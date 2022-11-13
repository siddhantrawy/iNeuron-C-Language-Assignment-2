// Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include<stdio.h>

int main()
{
    float amt;
    printf("Enter amount in INR: ");
    scanf("%f",&amt);
    amt = amt*76.23;
    printf("Amount in USD = %0.02f",amt);
    return 0;
}