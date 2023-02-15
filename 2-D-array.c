/* C Code to implement two Dimensional Array
*/
#include<stdio.h>
void main()
{
int x[2][3],i,j;
printf("Enter values for 2-Dimentional Array !");
for(i=0;i<2;i++) /*Outer for loop for row*/
{
for(j=0;j<3;j++) /*inner for loop for Column*/
{
scanf("%d",&x[i][j]);
}
}

for(i=0;i<2;i++) /*Outer for loop for row*/
{
for(j=0;j<3;j++) /*inner for loop for Column*/
{
printf("\nThe value of %d in the memory address is %u", x[i][j],&x[i][j]);
}
}
return(0);
}
