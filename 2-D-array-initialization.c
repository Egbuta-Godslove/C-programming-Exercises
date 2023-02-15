/*C CODE To implement Initialization of 2-D Array
Following Code Demonstrate How to initialize 2-D
Array & Access it .
*/
#include<stdio.h>
void main()
{
int i,j, x[3][3]={
{100,25,33},
{200,30,44},
{43,34,20},
};

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",x[i][j]);
}

printf("\n");
}
return(0);
}
