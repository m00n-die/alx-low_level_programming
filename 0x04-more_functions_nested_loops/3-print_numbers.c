#include "main.h"

/**
 * print_numbers - prints numbers
 * followed by anew line
 * Return: ALwyas 0
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
