Task 6.txt
Who has access
A
System properties
Type
Text
Size
496 bytes
Storage used
496 bytes
Location
0x06-pointers_arrays_strings
Owner
Antony Bahati
Modified
21 Sept 2022 by Antony Bahati
Opened
12:32 by me
Created
21 Sept 2022
No description
Viewers can download
#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string to capitalize
 *
 * Return: address of s
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
