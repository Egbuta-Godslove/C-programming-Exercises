#include <stdio.h>

void main() {

	float salary;

	printf("Enter your salary:");
	scanf("%f", &salary);

	if(salary>=500 && salary<1000){
		printf("Your are eligible for class 3");
	}

	if(salary>=1000 && salary<5000){
		printf("You are eligible for class 2");
	}

	if(salary>=5000 && salary<7000){
		printf("your are eligible for class 1");
	}
	return (0);
}

