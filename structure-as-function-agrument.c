/*C Code to implement structure as function argument
*/
#include <stdio.h>
struct student
{
char name[20];
int Reg_no;
int marks;
};

/* function declaration */

void printstudent( struct student s );

void main( )

{
struct student s1; /* Declare structure variable s to access the structure members*/

printf("Enter student Name,Reg_no and Marks: ");

scanf("%s %d %d",&s1.name,&s1.Reg_no,&s1.marks);

/* Passing the structure variable to function*/

printstudent( s1 );

}

void printstudent( struct student s )

{

printf( "student Name : %s\n", s.name);
printf( "Student Reg_no : %d\n",s.Reg_no);
printf( "Student Marks : %d\n", s.marks);

}
