#include <stdio.h>
/**
 * main - prints number if arguments passed to it
 * @argc: number of arguments passed
 * @argv: string of characters passed on cmd line
 *
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
