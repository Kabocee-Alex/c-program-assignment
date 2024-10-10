/*
Program to calculate electricity bill
Author:Kaaria
Date:10/10/2024
*/

#include <stdio.h>
int main () {

int customerID, unitConsumed;
char customerName[50];

//Input data
printf("Enter Customer ID:");
scanf("%d",&customerID);

printf("Enter Unit Consumed:");
scanf("%d",&unitConsumed);

printf("Enter Customer Name:");
scanf("%s",&customerName);

double chargesperunit, newPrice, totalBill;

//if statement
if(unitConsumed<=1.99){
        chargesperunit=1.20;
}

//else if statements
else if(unitConsumed<400){
    chargesperunit=1.50;
}

else if(unitConsumed<600){
    chargesperunit=1.80;
}

//else statement
else {
      chargesperunit=2.00;
}

//calculate the totalbill
 totalBill=(unitConsumed*chargesperunit);


if(totalBill>400){
   newPrice=totalBill*0.15;

}

else {
      totalBill=totalBill;
}

//to make sure the minimum bill is 100
if(totalBill<100){
    totalBill=100;
}

//calculate total amount
int totalAmount=(totalBill+newPrice);

//print statements
printf("ID number:%d",customerID);
printf("\nUits consumed:%d",unitConsumed);
printf("\nName is:%s",customerName);
printf("\nThe charges are:%d",chargesperunit);
printf("\nThe total amount is:%d",totalAmount);

return 0;
}
