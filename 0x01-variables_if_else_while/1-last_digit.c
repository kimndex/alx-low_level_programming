#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main entry
 * Description: Comparison
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, x);
	else if (n == 0)
		printf("Last digit of %i is %i and is 0\n", n, x);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, x);
	Return (0);
}
