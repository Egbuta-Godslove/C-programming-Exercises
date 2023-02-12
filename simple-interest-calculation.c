#include <stdio.h>

void main() {

	float amount ,rate,time,interest;

	printf("\n Enter the principal amount: ");
	scanf("%f", &amount);

	printf("\n Enter the interest rate: ");
	scanf("%f", &rate);

	printf("\n Enter the time in the year: ");
	scanf("%f", &time);

	interest= amount*time*rate/100;

	printf("\n The simple interest is %f", interest);

	return (0);
}
