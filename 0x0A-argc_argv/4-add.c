#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: if not digit return 1 else 0
 */
int main(int argc, char *argv[])
{
	int b;
	int a = 1;
	int add = 0;
	/*continues with execution if true*/
	if (argc > 1)
	{
		/*loops through arguments to check if they are digits*/
		for (; a < argc; a++)
		{
			/*checks if arguments are not digits*/
			if (!isdigit(argv[a][0]))
			{
				/*if not a digit*/
				printf("Error\n");
				return (1);
			}
		}
		/*loops through arguments adding them up*/
		for (b = 1; b < argc; b++)
		{
			add += atoi(argv[b]);
		}
		printf("%d\n", add);
	}
	/*for argc < 1*/
	else
	{
		printf("0\n");
	}
	return (0);
}
