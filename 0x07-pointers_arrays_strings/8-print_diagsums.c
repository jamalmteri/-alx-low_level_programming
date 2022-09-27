#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, n, jumla1 = 0, jumla2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		jumla1 = jumla1 + a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		jumla2 = jumla2 + a[n];
	printf("%d, %d\n", jumla1, jumla2);
}
