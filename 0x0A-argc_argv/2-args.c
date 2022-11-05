#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Description: prints all the arguments separated by a new line
 *
 *@argc: number of arguments.
 *@argv: pointer containing the arrays of the arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
	printf("%s\n", argv[k]);
	}
	return (0);
}
