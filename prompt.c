#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * This is a function that works like a shell, waiting commands...
 * Return: 0 on success.
 */
int main()
{
	char *buffer;
	size_t bufsize = 1000;

	buffer = malloc(bufsize * sizeof(char));
	if (buffer == '\0')
	{
		perror("No fue posible alocar el tamaño para el buffer");
		exit(1);
	}
	while (1)
	{
		printf("$ ");
		getline(&buffer, &bufsize, stdin);
		printf("%s", buffer);
	}

	return (0);
}
