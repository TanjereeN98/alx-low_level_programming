#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - main entry point
 * Description: a function (Positive anything is better than negative nothing)
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("is zero\n");
	return (0);
}
