#include "main.h"

/**
 * _isalpha_ - Check if Alphabtic
 *@c: Character
 * Return: 1 If True 0 If Not
 */

int _isalpha_(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
