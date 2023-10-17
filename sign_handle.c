#include "main.h"

/**
 * sign_handle - Handle ^C
 * @sig:Captured Signal
 * Return: Void
 */

void sign_handle(int sig)
{
	if (sig == SIGINT)
	{
		PRINTER("\n$ ");
	}
}
