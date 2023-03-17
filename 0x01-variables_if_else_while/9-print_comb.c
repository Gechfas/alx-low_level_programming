#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is a program that tell you the number is + or -
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
