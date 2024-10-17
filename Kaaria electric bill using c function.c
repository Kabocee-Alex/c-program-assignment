/*
Program to calculate electric bill using c functions
Author:Alex
Date:17/10/2024
*/

#include <stdio.h>

int multiplication(int y);
int sum(int x);

//y=total bill
//x=total amount


int main() {

int a ,b;
char c[50];
int chargesperunit ,newPrice;

//Input customer ID
printf("Enter your ID:");
scanf("%d",&a);

printf("Enter units consumed:");
scanf("%d",&b);

printf("Enter your name:");
scanf("%s",&c);


//if statements
if(b<=199){
  chargesperunit=1.20;
  }
else if(b<400){
  chargesperunit=1.50;
}
else if(b<600){
  chargesperunit=1.80;
}
else    {
  chargesperunit=2.00;
}

//function calling
int y=(b,chargesperunit);


//if statements
if(y>400){
   newPrice=y*0.15;
   }

//Ensure minimum bill is 100
if(y<100){
   y=1000;
}

//function calling
int x=(y,newPrice);


//print statements
printf("Your ID is:%d",a);
printf("\nThe units you consumed are:%d",b);
printf("\nYour name is:%s",c);
printf("\nCharges per units are:%d",chargesperunit);
printf("\nThe total amount is:%d",y);

return 0;
}

//function definition
int multiplication(int x){
return x;
}

//function definition
int sum(int y) {
  return y;
  }
