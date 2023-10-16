#include "main.h"

/**
 * _strchr_ - Locate Charactere In String
 * @s:String Search In
 * @c:Char To Search For
 * Return: Pointer To Char*
 */

char *_strchr_(char *s, char c)
{

	do	{

		if (*s == c)
		{
			break;
		}
		} while (*s++);

	return (s);
}
