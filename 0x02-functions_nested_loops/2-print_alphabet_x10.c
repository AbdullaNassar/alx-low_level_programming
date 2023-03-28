#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet inercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		if (i != 9)
			_putchar('\n');
	}
}
