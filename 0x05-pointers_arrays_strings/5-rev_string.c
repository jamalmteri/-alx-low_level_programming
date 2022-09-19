#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int fcounter = 0;
	int i;
		
	while (s[fcounter] != '\0')
		counter++;
	for (i = 0; i < fcounter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
