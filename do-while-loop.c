/*Here's an example program to calculate the percentage of 5 students using a do-while loop.
   */

#include <stdio.h>

int main() {
		  
	int i = 1;
	float marks, total_marks = 500.0;

	do {
		printf("Enter the marks obtained in subject %d: ", i);
		scanf("%f", &marks);

		printf("Percentage of student %d is: %.2f\n", i, (marks / total_marks) * 100);

		i++;
	} while (i <= 5);

	return 0;

}
