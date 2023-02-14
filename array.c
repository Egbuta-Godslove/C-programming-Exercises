//print the salary of five workers with the help of Array.



#include <stdio.h>

void main(){

	float e[5];

	int i;

	printf("Enter 5 workers salary: ");

	for(i=0; i<5; i++){

	scanf("%f",&e[i]);

	}

	printf("The memory map for array Element!");

	for(i=0; i<5; i++){

		printf("\n The variable e[%d] the value %f at Memory address %u",i,e[i],&e[i]);

	}

	return(0);

}
