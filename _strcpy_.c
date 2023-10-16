#include "main.h"

/**
 * _strcpy_ - Copie Source To Destination Char
 * @dest:Destination
 * @src:Source
 * Return: Copie Of Char *src
 */

char *_strcpy_(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
