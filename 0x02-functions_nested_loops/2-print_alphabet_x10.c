#include "main.h"

/**
 * print_alphabet_10x - print alphabet 10x
 * Return: Always 0
 */

void print_alphabet_10x(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
