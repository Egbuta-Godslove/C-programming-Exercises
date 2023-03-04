/* C Code to implement realloc()
*/

#include<stdio.h>

#include<string.h>

#include<stdlib.h>

void main(void)

{

char *p;

p = (char *) malloc(15*sizeof(char));

strcpy(p, "Hello World !");

printf("\nString is [%s] Address is %u", p, p);

p = (char *) realloc(p,30*sizeof(char));

printf("\nString is [%s]\nNew address after reallocation is %u", p, p);

free(p);

return(0);

}
