/* C code to implement calloc()
*/

#include<stdlib.h>

#include<stdio.h>

void main()

{

int a,i , *p;
printf(" \n Enter the size of Array: ");

scanf("%d",&a);

p=(int *)calloc(a,sizeof(int));

if(p==NULL)

{

printf("Memory Allocation fails !");

}
for(i=0;i<=a;i++)

{

printf("Enter value of p[i]: ",p[i]);

scanf("%d",&p[i]);

}

free(p);

for(i=0;i<=a;i++)

{

printf("\n Value %d Memory Address %u",p[i],&p[i]);

}

return(0);

}
