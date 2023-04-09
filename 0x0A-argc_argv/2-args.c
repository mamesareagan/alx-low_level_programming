#include <stdio.h>
/**
 * main - prints arguments it recieves
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;/*declaration*/

	for (a = 0; a < argc; a++)
	{
		/*print out arguments passed to the program*/
		printf("%s\n", argv[a]);
	}
	return (0);
}
