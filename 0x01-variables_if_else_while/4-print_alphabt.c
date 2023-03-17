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

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
