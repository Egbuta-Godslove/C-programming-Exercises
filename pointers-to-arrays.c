/* C Code to Demonstrate , Pointer to Array !
*/
#include <stdio.h>

void main (){
    
int x[] = { 1,2,3,4,5,6,7,8,9 };
int i, *ptr;

/*Following code is same as &x[0]*/
ptr=x;
for(i=0;i<9;i++)

{
printf("\nArray Element x[%d] is %d ",i,*ptr);
ptr++;

}
return(0);
}
