/*C Code to implement function with Arguments
*/
#include<stdio.h>

void area(float);

void main()

{
float r;
printf("Enter radius of a circle !");
scanf("%f",&r);
area(r);
return(0);
}
void area(float r1)
{
float area;
area=3.14*r1*r1;

printf("The Area of Circle is %f ",area);
}

Execrise 2.

//Write a program with the help of function with argument to perform addition of two numbers.
#include <stdio.h>

void add(int);

void main() {
    int a=10,b=30;
    int c;

    c = a+b;
    add(c);

    return 0;
}
void add(int c)
{
    printf("\n The sum of a and b is %d",c);
}
