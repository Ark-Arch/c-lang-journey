#include <stdio.h>

int main(void)
{
	int i       = 1;
	int score;
	int sum     = 0;

	while (i<=5) {
		printf("\nwhat is the next score:");
		scanf("%d", &score);
		sum+=score;
		++i;
	}

	printf("\n\nThe total scores of students is %d\n\n", sum);
	printf("The average score is computed as: %g\n\n", sum*1.0/i);

	return 0;
}

