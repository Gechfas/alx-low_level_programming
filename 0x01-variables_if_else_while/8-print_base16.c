#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is a program that tell you the number is + or -
 * Return: zero
 */
int main(void)
{
	char c;
	char C;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (C = 'a'; C <= 'f'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
