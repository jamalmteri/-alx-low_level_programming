#include "main.h"
/**
* main - prints the string "Alxseprog" from a character array.
* @i - take each char in array
* Return: 0 on success.
*/
int main(void)
{
	char c[] = "Alxseprog";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
