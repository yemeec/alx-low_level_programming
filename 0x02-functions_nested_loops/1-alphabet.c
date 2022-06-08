#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letter2;

	for (letter2 = 'a'; letter2 <= 'z'; letter2++)
	{
		_putchar(letter2);
	}

	_putchar('\n');
	return 0;
}
