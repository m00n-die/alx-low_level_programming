#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: input string
 * Return: nothing
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	while (n)
		_putchar(s[--n]);
	_putchar('\n');
}
