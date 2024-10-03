/*
 Program to write users input
 Author:Kaaria Alex
 Date:29/09/2024
 */

 #include <stdio.h>
 int main () {

 int age;
 double income;
 float budget;

 //Input age
 printf("Enter age:");
 scanf("%d",&age);

 //Input income
 printf("Enter income:");
 scanf("%lf",&income);

 //Input budget
 printf("Enter budget:");
 scanf("%f",&budget);

 //Print age
 printf("Age is %d",age);

 //Print income
 printf("\nIncome is %lf",income);

 //Print budget
 printf("\nAmount is %f",budget);

 return 0;
 }
