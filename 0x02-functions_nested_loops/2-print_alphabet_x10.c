/*
 * File: 2-print_alphabet_x10.c
 * 
 */
#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int count2 = 0;
	char letter2;

	while (count2++ <= 9)
	{
		for (letter2 = 'a'; letter2 <= 'z'; letter2++)
			_putchar(letter2);
		_putchar('\n');
	}
}
