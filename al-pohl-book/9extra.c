#include <stdio.h>

int main (void)
{	
	int score;
	int no_students;
	int sum =0;
	
	printf("\nWhat is the number of students: ");
	scanf("%d", &no_students);
	
	for (int i = 1; i<=no_students; ++i)
	{
		printf("\nWhat is the number %d score: ", i);
		scanf("%d", &score);
		sum+=score;
		}
	
	printf("\n\nThe total scores of students is %d\n\n", sum);
	printf("The average score is computed as: %g\n\n", sum*1.0/no_students);
	
	return 0;
}

