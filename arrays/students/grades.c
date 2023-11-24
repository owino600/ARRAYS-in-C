#include "main.h"

int main(void)
{
	int i; /* declare a variable */
	const int N = 4;
	int scores[N];

	printf("Enter the grades:\n");
	printf("mathematics: ");
	scanf("%i", &scores[0]);

	printf("English: ");
	scanf("%i", &scores[1]);

	printf("Kiswahili: ");
	scanf("%i", &scores[2]);

	printf("Computer studies: ");
	scanf("%i", &scores[3]);

	
	float get_average = (float)(scores[0] + scores[1] + scores[2] + scores[3]) / N;
	printf("Average: %.2f\n", get_average);

	return (0);
}
