#include <stdio.h>
#include <stdlib.h>
/**
 * main - Emtry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
		putchar(rev);
			putchar('\n');

	return (0);
}
