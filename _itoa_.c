#include "main.h"

/**
 * _itoa_ - Convert Integer To Char
 * @n: Int To Convert
 * Return: Char Pointer
 */

char *_itoa_(unsigned int n)
{
	int len = 0, i = 0;
	char *s;

	len = _intlen_(n);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	*s = '\0';
	while (n / 10)
	{
		s[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	s[i] = (n % 10) + '0';
	_array_rev_(s, len);
	s[i + 1] = '\0';

	return (s);
}
