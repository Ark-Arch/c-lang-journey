/* THIS PROGRAM COMPUTES THE MAXIMUM AND MINIMUM VALUES OF LIST OF NUMBERS */

#include <stdio.h>

// DEFINITION OF FUNCTION PROTOTYPES
void   prn_info(void);
float  maximum(float x, float y);
float  minimum(float x, float y);

// MAIN FUNCTION
int main(void)
{
	int     iteration, count;
	float   max, min, current_number;

	prn_info(); // THIS FUNCTION CALL PRINTS OUT INFORMATION ABOUT THIS PROGRAM
	
	// INITIALIZATIONS
	printf("Input the number of real numbers it is:  ");
	scanf("%d", &count);
	printf("\nInput %d real numbers:  ", count);
	scanf("%f", &current_number);
	max = min = current_number;

	// LOOP, SERVING AS THE INTEGRAL OF THE PROGRAM CODE: while loop
	iteration = 2;
	while (iteration <= count){
		scanf("%f", &current_number);
		max = maximum(max, current_number); // THIS FUNCTION CALL COMPARES THE PREVIOUS MAXIMUM VALUE AGAINST THE CURRENT_NUMBER, AND THEN RETURNS IT.
		min = minimum(min, current_number); // THIS FUNCTION CALL COMPARES THE PREVIOUS MINIMUM VALUE AGAINST THE CURRENT_NUMBER, AND THEN RETURNS IT.
		
		++iteration;
	}

	// RESULTS TO BE PRINTED
	printf("\n%s%11.3f\n%s%11.3f\n\n",
		"Maximum value:", max,
		"Minimum value:", min     );
	
	
	return 0;
	
}

// THE FUNCTIONS USED IN THE MAIN FUNCTION ARE DECLARED BELOW
float maximum(float x, float y)
{
	if (x > y)
		return x;
	else
		return y;
}

float minimum(float x, float y)
{
	if (x < y)
		return x;
	else
		return y;
}

void prn_info(void)
{
	printf("\n%s\n%s\n\n",
	   "This program reads an integer value for a count of real numbers, and then",
	   "processes the count of real numbers to find max and min values.");
}







