/*
 * File: 100-get_endianness.c
 * Auth: Brennan D Baraban
 */

#include "main.h"

/**
 * get_endianness -  a function that checks the endianness
 *
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
