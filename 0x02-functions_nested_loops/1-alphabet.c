#include "main.h"


/**
 * print_alphabet - check the code for Holberton School students.
 *
 *   *
 *
 *    * Return: Always 0.
 *
 */


void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	putchar('\n');
}
