/*
Program to find compound interest
Author:Kaaria Alex
Date:29/09/2024
*/

#include <stdio.h>
int main() {

double principal, rate, time;

//Input principal
printf("Enter initial principal balance:");
scanf("%lf",&principal);

//Input rate
printf("Enter interest rate:");
scanf("%lf",&rate);

//Input time
printf("Enter number of time periods elapsed:");
scanf("%lf",&time);

double amount=principal*pow((1+rate/100),time);

//Print amount
printf("Amount is %lf",amount);

return 0;
}
