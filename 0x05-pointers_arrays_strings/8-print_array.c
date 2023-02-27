#include "main.h"
#include <stdio.h>

/**
 * puts_half -  a function that prints n of an array
 * @a: array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs
 */
void puts_half(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	if (i == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}
