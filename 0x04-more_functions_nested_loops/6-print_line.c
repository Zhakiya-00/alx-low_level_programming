#include "main.h"

/**
 * print_line - Prints line using_
 *
 * @n: number of _
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');

	}
	else
		_putchar('\n');

}
