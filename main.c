#include "shell.h"

/**
 * main - a simple shell program
 * @argc: an argument counter
 * @argv: an array of strings
 * Return: zero
 */


int main(int argc, char **argv)
{
	char *lineptr;
	size_t n;
start:
	lineptr = NULL;
	n = 0;

	(void)argc;
	(void)argv;

	_prompt();
	getline(&lineptr, &n, stdin);
	printf("%s", lineptr);

	free(lineptr);
	goto start;

	return (0);
}
