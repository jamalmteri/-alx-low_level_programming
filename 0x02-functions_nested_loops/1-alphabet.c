#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alx;

	for (alx = 'a'; alx <= 'z'; alx++)
	{
		_putchar(alx);
	}
	_putchar('\n');
}
