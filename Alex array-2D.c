/*
Program for array-2D
Author:Alex
Date:11/10/2024
*/

#include <stdio.h>
int main () {

//i=rows   =2
//j=columns=3

int i,j;
int marks[2][3]={{90,77,75,67,99},{88,76,98,79,88}};

//for loop
for(i=0;i<2;i++){
 for(j=0;j<3;j++)

 printf("\nThe marks are[%d][%d]=%d",i,j,marks[i][j]);
 }

 return 0;
 }
