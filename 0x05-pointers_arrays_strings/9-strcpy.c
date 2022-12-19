#include "main.h"

/**
 * a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: pointer to destination string
 * @src: pointer to sourxce string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src);
{
	char *a = dest;

	while (*src)
		*dest++ = *src++;
	return (a);
}
