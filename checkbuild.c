#include "shell.h"

/**
* checkbuild - checks if a given command is a buildin
* @arv: the array of the listed arguments
* Return: pointer to function that takes an arv and returns a void
*/
void(*checkbuild(char **arv))(char **arv)
{
	int i, j;
	mybuild T[] = {
		{"exit", exitt},
		{"env", env},
		{"setenv", _setenv},
		{"unsetenv", _unsetenv},
		{NULL, NULL}
	};

	for (i = 0; T[i].name; i++)
	{
		j = 0;
		if (T[i].name[j] == arv[0][j])
		{
			for (j = 0; arv[0][j]; j++)
			{
				if (T[i].name[j] != arv[0][j])
					break;
			}
			if (!arv[0][j])
				return (T[i].func);
		}
	}
	return (0);
}
