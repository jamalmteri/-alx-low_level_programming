<<<<<<< HEAD
#include "main.h"
/**
  * clear_bit - sets a bit at index to zero
  * @n: pointer to number
  * @index: index to change
  * Return: 1 on success, -1 on failure
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
=======
#include "main.h"
/**
  * clear_bit - sets a bit at index to zero
  * @n: pointer to number
  * @index: index to change
  * Return: 1 on success, -1 on failure
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
>>>>>>> de4ac1824ce4b87c3f8b93660350a5e6beb914d8
