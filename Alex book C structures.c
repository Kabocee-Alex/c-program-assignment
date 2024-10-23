/*
Program to write C structures
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

int main() {

struct Book book1,book2;

strcpy(book1.title,"Introduction to C programming");
strcpy(book1.author,"John Smith");
book1.publicationYear=2022;
strcpy(book1.ISBN,"9780131103621");
book1.price=49.99;


//printf statements
printf("The title is:%s",book1.title);
printf("\nThe name of Author:%s",book1.author);
printf("\nYear of publication:%d",book1.publicationYear);
printf("\nISBN:%s",book1.ISBN);
printf("\nBook price:%f",book1.price);

return 0;
}
