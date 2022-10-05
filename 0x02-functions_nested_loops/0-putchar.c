#include "main.h"
<<<<<<< HEAD

/**
 * main - print putchar
 * Return: always 0
 */

int main(void)
{
        _putchar('_')
	_putchar('p')
        _putchar('u')
        _putchar('t')
        _putchat('c')
        _putchar('h')
        _putchar('a')
        _putchar('r')
        _putchar('\n');
        
        return (0);
}	
=======
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
>>>>>>> 849789d7195b8231e561b07bf4ae3470bac35269
