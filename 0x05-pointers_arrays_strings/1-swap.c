Task 1.txt

Who has access

A

System properties

Type

Text

Size

215 bytes

Storage used

215 bytes

Location

pointers arrays and strings

Owner

Antony Bahati

Modified

09:47 by Antony Bahati

Opened

20:18 by me

Created

09:50

No description

Viewers can download

#include "main.h"



/**

*swap_int - swaps two integers' values

*@a: first integer

*@b: second integer

*Return: returns nothing

*/



void swap_int(int *a, int *b)

{

	int tmp = *a;



	*a = *b;

	*b = tmp;

}
