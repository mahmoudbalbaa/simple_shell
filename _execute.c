#include "shell.h"

/**
 * _execute - a func that executes the command
 * @argv: command and its arguments
 * @lineptr: the read string
 * Return: void
 */

void _execute(char **argv, char *lineptr)
{
	char *env[] = {"PATH=/bin", NULL};
	pid_t pid = fork();

	if (pid == 0)
	{
		argv[0] = lineptr;
		argv[1] = NULL;

		if (execve(argv[0], argv, env) == -1)
			perror(argv[0]);
		exit(0);
	}
	else if (pid > 0)
		wait(NULL);
	else
		perror("Error");
}
