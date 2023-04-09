#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two integers
 * @argc: number of arguments passed
 * @argv: arguments passed
 *
 * Return: 1 if arguments exceed 2 else return 0.
 */
int main(int argc, char *argv[])
{
	/*declaration*/
	int mul = 1;
	int a;

	if (argc > 1 && argc < 4)
	{
		/*multiplies two arguments passed to it*/
		for (a = 1; a < 3; a++)
		{
			mul *= atoi(argv[a]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
