#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * @argc: amount of arguments passed 
 * @argv: pointers
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
	}
	printf("%d\n", k - 1);
	return (0);
}
