/*
Program to use userinput in c structures
Author:Alex
Date:23/10/2024
*/


#include <stdio.h>
#include <string.h>   //strcpy

struct Book{
char title[30];
char author[30];
int publicationYear;
char ISBN[13];
float price;
};

int main (){

struct Book book1, book2;

//User defined input
strcpy(book1.title,"");
strcpy(book1.author,"");
book1.publicationYear;
strcpy(book1.ISBN,"");
book1.price;

//Input variables
printf("Enter title of the book:");
scanf("%s",&book1.title);

//Input author
printf("Enter Author`s name:");
scanf("%s",&book1.author);

//Input pubication year
printf("Enter year of publication:");
scanf("%d",&book1.publicationYear);

//Input ISBN
printf("Enter ISBN:");
scanf("%s",&book1.ISBN);

//Input price
printf("Enter the book price:");
scanf("%f",&book1.price);

//Printf statements
printf("The title is:%s",book1.title);
printf("\nThe name of the Author:%s",book1.author);
printf("\nYear of publication:%d",book1.publicationYear);
printf("\nISBN:%s",book1.ISBN);
printf("\nBook price:%f",book1.price);

return 0;
}
