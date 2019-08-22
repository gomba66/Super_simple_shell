#include <stdio.h>
/**
 * main - Entry point
 * This is a program that print all arguments passed in the program.
 * @ac: Number of arguments.
 * @av: String of arrays with each arguments.
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	int i = 1;
	(void)ac;

	while (av[i] != '\0')
	{
		printf("%s ", av[i]);
		i++;
	}
	if (i != 1)
	{
		printf("\n");
	}

	return (0);
}
