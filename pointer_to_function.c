/* C Code to implement Pointer to Function
*/

#include<stdio.h>

void hello_world();

void main()

{

/*Following line is pointer to function */

void (*Hello_ptr)();

Hello_ptr=&hello_world;

printf("\nThe Address of function display is %u",hello_world);

printf("\n The Address hold by pointer variable is %u",Hello_ptr);

(*Hello_ptr)();

return(0);

}

void hello_world()

{

puts("\n Hello World This is the Test file !");

}
