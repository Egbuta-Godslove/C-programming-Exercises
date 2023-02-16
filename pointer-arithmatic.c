/*C Code to Demonstrate arithmatic operations with pointers
*/
#include <stdio.h>

int main() {
   
   int a,b,c,d, *p,*t;
   a=44;
   b=20;
   
   p=&a;
   t=&b;
   
   c=*p+*t;
   d=*p-*t;
  
  printf("\nThe address of a = %u",a,&a);
  printf("\nThe address of b = %u",b,&b);
  printf("\nThe value of a=%d and b=%d",a,b);
  printf("\nThe addition of a&b is =%d",c);
  printf("\nThe substraction of a&b is =%d",d);
  
 return 0;
}
