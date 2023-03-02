#include "main.h"

/**
 * strncat -  a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of maximum bytes to be used
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{

	int i, x;

	for (i = 0 dest[i] != '\0'; i++)
	{
	}

	for (x = 0; x < n; x++)
	{
		dest[i + x] = src[x];
		if (scr[x] == '0\')
			x = n;
	}

	return (dest);
