//In this program, we declare a one-dimensional array percentages with a size of 10 to store the percentages of the students. We then use a for loop to input the percentages of 10 students, and another for loop to display the percentages of 10 students. The %.2f%% format specifier is used to display the percentages with two decimal places and a percent sign.

#include <stdio.h>



int main() {

float percentages[10];

int i;

printf("Enter the percentages of 10 students:\n");


// Input the percentages of 10 students

for (i = 0; i < 10; i++) {

printf("Student %d: ", i + 1);
scanf("%f", &percentages[i]);

						    }
// Display the percentages of 10 students

printf("Percentages of 10 students:\n");
for (i = 0; i < 10; i++) {
printf("Student %d: %.2f%%\n", i + 1, percentages[i]);

}

return 0;

}


