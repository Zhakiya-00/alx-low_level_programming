#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/*
*main- assigns a random number to int n everytime
* n: variable to store number in
* Return: 0
*/

int main(void)

{

	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else if (n < 0)
		printf("%d is negative", n);

	printf("\n");

	return (0);
}
