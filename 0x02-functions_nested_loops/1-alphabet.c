#include "main.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
	_putchar(a);
	++a;
	}
	_putchar('\n');
}
