/*C Code to implement union
*/
#include<stdio.h>
#include<string.h>

union student
{
char name[10];
int roll_no;
int marks;
};

void main()
{
union student s;
printf("The Size of Union is %u bytes",sizeof(s));

strcpy(s.name ,"Godslove");

printf("\n The name is %s",s.name);

s.roll_no=2;
printf("\n The Roll No is =%d",s.roll_no);
s.marks=98;
printf("\n The Marks =%d",s.marks);

return(0);
}
