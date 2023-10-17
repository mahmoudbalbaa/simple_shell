#include "main.h"

/**
 * _calloc_ -  Allocates Memory For An Array, Using Malloc.
 * @size: Size
 * Return: Void Pointer
 */

void *_calloc_(unsigned int size)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = '\0';
	}

	return (a);
}
