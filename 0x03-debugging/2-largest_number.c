#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/
int main(void)
{
<<<<<<< HEAD
int largest;
if (a >= b && b >= c)
{	
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
=======
        int a, b, c;
        int largest;
        a = 972;
        b = -98;
        c = 0;
        largest = largest_number(a, b, c);
        printf("%d is the largest number\n", largest);
        return (0);
>>>>>>> 29befd7144e9b7cbc8620eeb4b32f563e99a7f78
}
