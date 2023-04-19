#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * main - prints its own opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 **/
int main(int argc, char *argv[])
{
	int k, (*p)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	printf("%.2x", *(unsigned char *)p);
	p++;
	for (k = 1; k < atoi(argv[1]); k++)
	{
		printf(" %.2x", *(unsigned char *)p);
		p++;
	}
	printf("\n");
	return (0);
}
