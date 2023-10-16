#include "main.h"

/**
 * _strcat_ - Concat Two String
 * @dest:First String
 * @src:Second String
 * Return:First String + Second String Char *
 */

char *_strcat_(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (s);
}
