#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Entry point
 *
 * if - condition for printing
 *
 * else if - alternate condition for printing
 *
 * else - alternate condition to execute printing
 *
 *    * Return: Always 0 (Success/correct)
 *
 */



int main(void)

{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n == 0)
	printf("%d is zero\n", n);


	else if (n <= 0)
	printf("%d is negative\n", n);


	else(n >= 0);

	printf("%d is positive\n", n);


	return (0);

}
