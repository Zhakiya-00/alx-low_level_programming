#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then uppercase
 * Return: Always 0.
 */

int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch >= 'a' && ch <= 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; CH >= 'A' && CH <= 'Z'; CH++)
		putchar(CH);
	putchar('\n');

	return (0);
}
