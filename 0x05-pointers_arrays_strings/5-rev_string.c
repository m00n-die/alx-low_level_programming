#include "main.h"

/**
 * rev_string - unction that reverses a string
 * @s: input string
 * Return: nothing
 */

void rev_string(char *s);
{
	int len = 0;
	int n = 0;
	char rev;

	while (s[len] != '\0')
		len++;
	while (n < len--)
	{
		rev = s[n];
		s[n++] = s[len];
		s[len] = rev;
	}
}
