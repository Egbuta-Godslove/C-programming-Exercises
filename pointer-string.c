/* C Code to implement Array of pointers to string
*/

#include <stdio.h>
void main (){

char *names[10] = {
    "abel",
    "sam",
    "john",
    "timothy",
};

int i=0;

for(i=0; i<4; i++){
    printf("\nThe value of names [%d]=%s",i,names[i]);
}


return(0);
}
