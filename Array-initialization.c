/* C Code to implement the Array Initialization
*/
#include<stdio.h>
void main()
{
int i, x[15]={ 12,123,324,566,554,343,211,267,991,110,345,657,234,124,556 };
printf("The Following is the Memory Map for Initialized Array !");
for(i=0;i<10;i++)
{
printf("\n Variable x[%d] Value %d Memory Address %u",i,x[i],&x[i]);
}
printf("\n %d",x[2]);
printf("\n %d",x[5]);
return(0);
}
