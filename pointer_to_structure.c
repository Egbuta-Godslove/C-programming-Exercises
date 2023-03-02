/*C Code to Demonstrate Pointer to structure
 */

#include<stdio.h>
struct student
{
char name[20];
int age;
int score;
};

void main()

{
struct student *ptr,s;
ptr=&s; /*assigning the Address of structure variable s to pointer variable ptr */

printf("Enter the Name,age and score of student: ");

scanf(" %s %d %d",&(*ptr).name,&(*ptr).age,&(*ptr).score);/*accessing the structure member */

printf("\nName %s ",(*ptr).name);

printf("\nAge %d ",(*ptr).age);

printf("\nscore %d ",(*ptr).score);

return(0);
}
