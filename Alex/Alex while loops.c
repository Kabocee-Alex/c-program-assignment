/*
program to write while loop from users input
Author:Alex
Date:5/10/2024
*/

#include <stdio.h>
int main () {

int start, stop, sum=0;

//Enter start
printf("Enter start digit:");
scanf("%d",&start);

//Enter stop
printf("Enter stop digit:");
scanf("%d",&stop);

int i=start;

//while loop
while(i<=stop){
printf("%d\n",i);
i++;
sum=sum+i;
}

//print statements
printf("\nThe sum is %d",sum);

return 0;
}


