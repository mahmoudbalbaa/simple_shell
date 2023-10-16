#include "main.h"

/**
 * _intlen_ - Determine Length Of Int
 * @num: Given Int
 * Return: Length Of Int
 */

int _intlen_(int num)
{
	int len = 0;

	while (num != 0)
	{
		len++;
		num /= 10;
	}

	return (len);
}
