#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: input string
 * Return: nothing
 */

void puts_half(char *str);
{
	int len = 0, n, i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (n = i; n < len; n++)
		_putchar(str[n]);

	_putchar('\n');
}
