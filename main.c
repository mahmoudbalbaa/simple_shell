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
	pid_t pid = 0;

	(void)argc;

	while (1)
	{
		_prompt();
		n_read = getline(&lineptr, &n, stdin);

		if (n_read == -1)
		{
			printf("Exiting shell ...\n");
			free(lineptr);

			return (0);
		}


		if (lineptr[n_read - 1] == '\n')
			lineptr[n_read - 1] = '\0';

		pid = fork();
		if (pid == 0)
		{
			argv[0] = lineptr;
			argv[1] = NULL;

			if (execve(argv[0], argv, NULL) == -1)
				perror("Error");
			exit(0);
		}
		else if (pid > 0)
			wait(NULL);
		else
			perror("Error");
	}

	free(lineptr);

	return (0);
}
