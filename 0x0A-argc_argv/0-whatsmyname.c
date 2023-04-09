#include <stdio.h>
/**
 * main - prints name of program
 *@argc: number of cmd arguments
 *@argv: array of strings passed as arguments
 * Return: always 0.
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	/*prints the name of program*/
	printf("%s\n", argv[0]);
	return (0);
}
