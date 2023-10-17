#include "main.h"

/**
 * _builtin_handl - Handle Builtin Command
 * @cmd: Parsed Command
 * @er:statue of last Excute
 * Return: -1 Fail 0 Succes (Return :Excute Builtin)
 */

int _builtin_handl(char **cmd, int er)
{
	 bul_t bil[] = {
		{"cd", _cd},
		{"env", _env_dis},
		{"help", _help},
		{"echo", _echo},
		{"_history", ___history_dis},
		{NULL, NULL}
	};
	int i = 0;

	while ((bil + i)->command)
	{
		if (_strcmp_(cmd[0], (bil + i)->command) == 0)
		{
			return ((bil + i)->fun(cmd, er));
		}
		i++;
	}
