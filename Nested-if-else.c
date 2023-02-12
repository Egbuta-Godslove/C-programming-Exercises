/* C code to implement Nested if else .

      If the values for a,b,c are Entered

         through the keyboard then write a

	    program to find the smallest of them .

	       */

#include<stdio.h>

void main(){

	int a,b,c,s;

	printf("Enter the Values for a,b and c Respectively: ");

	scanf("%d %d %d",&a,&b,&c);

	if(a<b)

	{

		if(a<c)
			s=a;
		else
			s=c;

	}
	else
	{

		if(a<c)
			s=b;
		else
			s=c;
	}

	printf("The smallest value is %d",s);

		return(0);

}



