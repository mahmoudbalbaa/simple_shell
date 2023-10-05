#include "shell.h"

/**
 * main - a simple shell program
 * @argc: an argument counter
 * @argv: an array of strings
 * Return: zro
 */


int main(int argc, char **argv)
{
	char *lineptr = NULL;
	size_t n = 0;

start:
	(void)argc;
	(void)argv;

	_prompt();
	getline(&lineptr, &n, stdin);
	printf("%s\n", lineptr);

	free(lineptr);
	goto start;

	return (0);
}
