/* C Code to implement #define directive
*/

#include<stdio.h>
#define MUL *
#define PLUS +

void main()

{

int a,b,c;

printf("\nEnter values for A and B: ");
scanf("%d %d",&a,&b);
c=a MUL b;

printf("\nThe Multiplication of A and B is %d",c);

c=a PLUS b;

printf("\nThe Addition of A and B is %d ",c);

return(0);
}
