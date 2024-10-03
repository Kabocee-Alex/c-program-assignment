/*
Program to calculate the fine for overdue library books
Author:Kaaria Alex
Date:30/09/2024
*/
#include <stdio.h>
int main () {

//Input variables
int bookID, dueDate, returnDate, fineRate, fineAmount;

//Input bookID
printf("Enter your bookID:");
scanf("%d",&bookID);

//Input dueDate
printf("Enter due date:");
scanf("%d",&dueDate);

//Input returnDate
printf("Enter return date:");
scanf("%d",&returnDate);

//calculate days overdue
int daysOverdue=(returnDate-dueDate);


//if statement
if(daysOverdue<=7){
 fineRate=20;
}

// else if statement
else if(daysOverdue<=14){
   fineRate=50;
}

//else statement
else {
    fineRate=100;
}

//calculate fine amount
fineAmount=(fineRate*daysOverdue);

//print output
printf("Book ID %d",bookID);
printf("\nDue date %d",dueDate);
printf("\nReturn Date %d",returnDate);
printf("\nDays Overdue $d",daysOverdue);
printf("\nFine Rate %d",fineRate);
printf("\nFine Amount %d",fineAmount);

return 0;
}
