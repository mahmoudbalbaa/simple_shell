#include "main.h"

/**
 * _treat_file - PARSE Check Command Fork Wait Excute in Line of File
 * @line: Line From A File
 * @counter:Error Counter
 * @fp:File Descriptor
 * @argv:Program Name
 * Return : Excute A line void
 */

void _treat_file(char *line, int counter, FILE *fp, char **argv)
{
	char **cmd;
	int st = 0;

	cmd = _cmd_prase(line);

	if (_strncmp_(cmd[0], "exit", 4) == 0)
	{
		exit_file_bul(cmd, line, fp);
	}
	else if (_bultn_checker(cmd) == 0)
	{
		st = _builtin_handl(cmd, st);
		free(cmd);
	}
	else
	{
		st = _cmd_check(cmd, line, counter, argv);
		free(cmd);
	}
}
