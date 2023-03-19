#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 97;
	int c = 65;

	for (a = 97,c = 65 ; a <= 122,c <= 98 ; a++,c++)
	{
		putchar(a);
		putchar(c);
	}
	putchar ('\n');
	return (0);
}
