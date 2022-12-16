#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest:copy to
 * @src: copy from
 * @n: n
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, da;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (da = 0; da < n; da++)
	{
		dest[i + da] = src[da];
		if (src[da] == '\0')
			da = n;
	}
	return (dest);
}
