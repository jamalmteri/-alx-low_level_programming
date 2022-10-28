<<<<<<< HEAD
#include "main.h"
#include <stdio.h>
/**
  * get_endianness - returns processor endianness
  * Return: 0 if big endian, 1 if little endian
  */
int get_endianness(void)
{
	int i;
	char *test;

	i = 1;
	test = (char *)&i;
	return ((int)test[0]);
}
=======
#include "main.h"
#include <stdio.h>
/**
  * get_endianness - returns processor endianness
  * Return: 0 if big endian, 1 if little endian
  */
int get_endianness(void)
{
	int i;
	char *test;

	i = 1;
	test = (char *)&i;
	return ((int)test[0]);
}
>>>>>>> de4ac1824ce4b87c3f8b93660350a5e6beb914d8
