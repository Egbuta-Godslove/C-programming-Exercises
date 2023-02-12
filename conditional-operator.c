/* C Code to implement Conditional operator

The Follwing code demonstrate the greatest of two values Entered through keyboard.
   */



#include <stdio.h>

void main()
{
	int a,b;
	printf("Enter any two values for a & b respectively !");
	scanf("%d%d",&a,&b);

	(a>b)?printf("A is Greater "):printf("B is Greater");

		return(0);
}

