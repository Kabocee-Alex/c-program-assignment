/*
Program for array-3D
Author:Alex
Date:11/10/2024
*/

#include <stdio.h>
int main() {

// a=first row
// b=second row
// c=columns


int a, b, c;  //first matrix                             //second matrix
int marks[2][2][3]={{{76,77,87,88,90},{75,69,88,99,82}},{{56,48,95,74,92},{45,99,79,80,60}}};

//for loop
for(a=0;a<2;a++){
 for(b=0;b<2;b++)
  for(c=0;c<3;c++)
  printf("\nThe marks are[%d][%d][%d]=%d",a,b,c,marks[a][b][c]);
  }

  return 0;
  }
