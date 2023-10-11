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
	char *lineptr_cp = lineptr;
	char *delim = " ";
	int i;
	char *portion;

	if (pid == 0)
	{
		portion = strtok(lineptr_cp, delim);
		for(i = 0; portion != NULL; i++)
		{
			argv[i] = portion;
			portion = strtok(NULL, delim);
		}
		argv[i] = NULL;

		if (execve(argv[0], argv, env) == -1)
			perror(argv[0]);
		exit(0);
	}
	else if (pid > 0)
		wait(NULL);
	else
	{
		perror("Error");
		exit(0);
	}
}
