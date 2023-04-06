#include "main.h"
/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0 Always
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int base = 1, j = 0;

	if (b == NULL)
		return (0);

	while (b[j + 1])
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		j++;
	}

	while (j >= 0)
	{
		res += ((b[i] - '0') * base);
		base *= 2;
		j--;
	}


	return (res);
}
