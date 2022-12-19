#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: input string
 * Return: nothing
 */

void puts2(char *str);
{
	int len = 0, n = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;
	for (; i <= len; n += 2)
		_putchar(str[i]);
	_putchar('\n');
}
