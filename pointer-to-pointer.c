// C Code to Demonstrate Pointer to Pointer
#include <stdio.h>

int main() {

int a=50, *p,**ptr;
p=&a;
ptr=&p;
printf("\nThe vaule of a is %d",a);
printf("\n%d is stored at address %u",a,&a);
printf("\n%d is stored at address %u",*p,&p);
printf("\n%d is stored at address %u",**ptr,&ptr);
return 0;
}
