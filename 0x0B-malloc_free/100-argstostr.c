#include "main.h"
#include<string.h>
/**
 * argstostr - Concatenates all the arguments of the program in a new string.
 *
 * @ac: Argument count.
 * @av: Argument vecteur.
 *
 * Return: Pointer to the new string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, size = ac, index = 0;
	char *args;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		size += strlen(av[i]);

	args = malloc(sizeof(char) * size + 1);
	if (args == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			args[index++] = av[i][j];
		}
		args[index++] = '\n';
	}
	args[index] = '\0';

	return (args);
}
