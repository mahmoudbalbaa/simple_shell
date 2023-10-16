#include "main.h"

/**
 * _puts_ - print a string
 * @str:pointer char
 * return:void
 */

void _puts_(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar_(str[i]);
	}
	_putchar_('\n');
}
