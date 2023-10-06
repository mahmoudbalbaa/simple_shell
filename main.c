#include "shell.h"

/**
 * main - a simple shell program
 * @argc: an argument counter
 * @argv: an array of strings
 * Return: zero
 */


int main(int argc, char **argv)
{
	char *lineptr = NULL;
	size_t n = 0;
	ssize_t n_read;

	(void)argc;
	(void)argv;

	while (1)
	{
		_prompt();
		n_read = getline(&lineptr, &n, stdin);

		if (n_read == -1)
		{
			printf("Exiting shell ...\n");

			return (-1);
		}

		printf("%s\n", lineptr);
	
		free(lineptr);
	}

	return (0);
}
