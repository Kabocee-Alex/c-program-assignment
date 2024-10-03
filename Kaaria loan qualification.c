/*
Program to identify qualification of loan in a bank
Author:Kaaria Alex
Date:30/09/2024
*/

#include <stdio.h>
int main() {

int age;
float income;

//Enter age
printf("Enter your age:");
scanf("%d",&age);

//Enter income
printf("Enter your annual income:");
scanf("%f",&income);

//If statements
if(age>=21 && income>=21000){
printf("Congratulation you qualify for a loan");
}
//else statement
else {
printf("Unfortunately,we are unable to offer you a loan at this time");
}

return 0;
}
