/* C Code to implement Array of Structure
*/

#include<stdio.h>

struct student
{
char name[10];
int roll_no;
int marks;
}s[5];

void main()
{
int i;
for(i=0;i<5;i++)
{
printf("Enter the Name,Roll No. and marks of student: ");
scanf("%s %d %d",&s[i].name,&s[i].roll_no,&s[i].marks);
}
for(i=0;i<5;i++)
{
printf("\n%s %d %d",s[i].name,s[i].roll_no,s[i].marks);
}
return(0);
}

Exercise 2. 

// modify the Exercise program above of to store the Book information to the information of ten books with the help of array of structure ?
#include <stdio.h>

struct book{
    char book_name[10];
    char author[10];
    int price;
}s[10];

int main() {

int i;
for(i=0; i<10; i++){
printf("\n Enter the book name, author, price:");
scanf("%s %s %d", &s[i].book_name,&s[i].author,&s[i].price);
}
for(i=0; i<10; i++){
    printf("\nThe of the book is %s\n and the author is %s\n the price of the book is %d ", s[i].book_name,s[i].author,s[i].price);
}
    return 0;
}
