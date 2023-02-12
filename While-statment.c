/* Write a c program to calculate percentage of 10 students with the help of While loop?

Note:- receive total marks obtained and total number of subjects.

*/



#include <stdio.h>



int main()

{

	int student_count = 1, total_subjects;

	float marks_obtained, total_marks, percentage;

			   

	while (student_count <= 10)

	{					

		printf("Enter total marks and total number of subjects for student %d: ", student_count);

		scanf("%f%d", &total_marks, &total_subjects);

									        

		marks_obtained = total_marks / total_subjects * 100;

		percentage = marks_obtained;



		printf("Percentage of student %d is: %.2f%%\n", student_count, percentage);

		student_count++;



	}

	return 0;
