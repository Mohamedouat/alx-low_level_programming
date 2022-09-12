#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success!)
 */

int main(void)
{
	char low;

		low = 'z';
		while (low >= 'a')
		{
			putchar(low);
			low--;
		}
	putchar('\n');
	return (0);
}
