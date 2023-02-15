/*C Code to demonstrate declaration ,initilization of pointers
*/
#include<stdio.h>
void main(){
int a=10,b,*p;
p=&a;
b=*p;

printf("\nThe Value of a is %d ",a);
printf("\n%d is stored at address %u ",a,&a);
printf("\n%d is stored at address %u", *p,p);
printf("\n%d is stored at address %u",b,&b);
printf("\n The value of b is %d ",*(&b));
return(0);
}
