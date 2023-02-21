/*C Code to implement strlen function
*/
#include<stdio.h>
#include<string.h>

void main()

{

int c;
char name[30];

printf("Enter Your Name :");

gets(name);

c=strlen(name);

printf("Lenght of the String [ %s ] is = %d ", name ,c );

return(0);

}
