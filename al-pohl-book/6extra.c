#include <stdio.h>

int main(void)
{
	int i                 = 1;
	int score;
	int no_students;
	int sum               = 0;

	/* Find out the number of students in the class */
	printf("\nWhat is the number of students: ");
	scanf("%d", &no_students);

	/* Take in each score and cummutatively sum them up */
	while (i<=no_students) {
		printf("\nwhat is the number %d score: ", i);
		scanf("%d", &score);
		sum+=score;
		++i;
	}

	/* Make computations of your results, and print them on to the screen */
	printf("\n\nThe total scores of students is %d\n\n", sum);
	printf("The average score is computed as: %g\n\n", sum*1.0/no_students);

	return 0;
}

