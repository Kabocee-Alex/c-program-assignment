/*
program to use user input in for loops
Author:Alex
Date:5/10/2024
*/

#include <stdio.h>
int main () {

int start, stop, sum=0;

//Enter start
printf("Enter digit to start:");
scanf("%d",&start);

//Enter stop
printf("Enter digit to stop:");
scanf("%d",&stop);

//for loops
for(int i=start;i<=stop;i++){
printf("%d\n",i);
sum=sum+start;
}

//print statement
printf("%d",start);

printf("%d",stop);
printf("The sum is %d\n",sum);

return 0;
}
