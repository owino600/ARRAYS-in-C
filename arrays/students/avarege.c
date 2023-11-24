#include "main.h"
float get_average(int scores[], int size)
{
	int i;
	float avg;
	int sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += scores[i];
	}
	avg = (float)sum / size;
	return (avg);
}
