/*C Code to implement #ifdef #ifndef #undef #endif
 */

#include<stdio.h>


#define CODING

#undef CODING

void main()

{
#ifndef CODING

printf("Coding is fun ");

#endif

return(0);

}
