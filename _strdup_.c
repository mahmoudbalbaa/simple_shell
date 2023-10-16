#include "main.h"

/**
 * _strdup_ - Duplicate A String
 * @str:String
 * Return: Duplicate String Failed Null
 */

char *_strdup_(char *str)
{
	size_t len, i;
	char *str2;

	len = _strlen_(str);
	str2 = malloc(sizeof(char) * (len + 1));

	if (!str2)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		str2[i] = str[i];
	}

	return (str2);
}
