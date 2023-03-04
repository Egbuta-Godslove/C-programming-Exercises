/* C Code to Demonstrate malloc()
*/
#include <stdio.h>
#include <stdlib.h>

void main()

{

int a,i,*p;

printf("Enter the size of Array: ");

scanf("%d",&a);

p=(int *)malloc(a*sizeof(int));

if(p==NULL)

{

printf("The Memory Allocation fails !");

}

for(i=0;i<=a;i++)

{
printf("Enter value for p[%d]",i);
scanf("%d",&p[i]);
}

for(i=0;i<=a;i++)

{
printf("\n Value %d Memory address %u",p[i],&p[i]);
}

return(0);
}
