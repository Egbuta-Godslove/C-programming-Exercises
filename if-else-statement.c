#include <stdio.h>

void main () {

	int age;
	printf("Enter Your age:");
	scanf("%d", &age);

	if(age >= 18) {
		printf("your are Eligible to vote");
	}
	else
	{
		printf("You're not Eligible to vote");
	}

	return (0);
}
