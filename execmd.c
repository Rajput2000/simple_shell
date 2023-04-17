#include "shell.h"

/**
 * execmd - function to handle the command line
 * @argv: argument
 */
void execmd(char **argv)
{
	char *command = NULL;

	if (argv)
	{
		command = argv[0];

		if (execve(command, argv, NULL) == -1)
		{
			printf("Error:");
		}
	}
}
