#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*argstostr - function start here
*@ac: int
*@av: pointer
*Return: char
*/

char *argstostr(int ac, char **av)
{
	int i, k = 0, l = 0, n;
	char *ptr;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
		int j;

		for (j = 0; av[i][j] != '\0'; j++, k++)
		;
	}
	ptr = (char *)malloc(k + (ac + 1));
	for (n = 0; n < ac; n++)
	{
		int z;

		for (z = 0; av[n][z] != '\0'; z++, l++)
		{
			ptr[l] = av[n][z];
		}
		ptr[l] = '\n';
		l++;
	}
	return (ptr);
}
