/*
Program to calculate simple interest
Author:Kaaria Alex
Date:29/09/2024
*/

#include <stdio.h>
int main () {

double principle, rate, time;

//Input principle
printf("Enter principle:");
scanf("%lf",&principle);

//Input rate
printf("Emter rate:");
scanf("%lf",&rate);

//Input time
printf("Enter time:");
scanf("%lf",&time);

double amount=(principle*rate*time)/100;

//Print amount
printf("Amount is %lf",amount);

return 0;
}
