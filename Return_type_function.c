/*C Code to implement function which returns value
*/
#include<stdio.h>

float area(float);

void main()

{
float r,result;
printf("Enter radius of a circle !");
scanf("%f",&r);
result =area(r);
printf("The Area of Circle is %f ",area);
return(0);
}
float area(float r1)
{
float area;
area=3.14*r1*r1;
return area;
}
