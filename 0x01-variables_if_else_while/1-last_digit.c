#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main - Prints the last digit of a randomly generated number
 *
 *   *        and whether it is greater than 5, less than 6, or 0.
 *
 *    *
 *
 *     * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	int last_digit = n % 10;

	printf("Last digit of %d\n", n);

	if (last_digit > 5)
		printf("and is greater than 5\n");

	else if (last_digit == 0)
		printf("and is 0\n");

	else if (last_digit < 6 && last_digit != 0)
		printf("and is less than 6 and not 0\n");

	else
		printf("\n");
	return (0);
}
