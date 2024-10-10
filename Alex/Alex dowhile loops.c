/*
program to write do/while loops inputed by user
Author:Alex
Date:5/10/2024
*/

#include <stdio.h>
int main () {

int start, stop, sum=0;

//Input start
printf("Enter start digit:");
scanf("%d",&start);

//Input stop
printf("Enter stop digit:");
scanf("%d",&stop);

int i=start;

//do/while loops
do {
printf("%d\n",i);
i++;
sum=sum+i;
}

while(i<=stop);

//print statement
printf("\nThe sum is %d",sum);

return 0;
}
