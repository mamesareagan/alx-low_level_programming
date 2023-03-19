#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 48; n1 <= 56; n1++)
	{
		for (n2 = n1 + 1; n2 <= 57; n2++)
		{
			putchar(n1);
			putchar(n2);
			if (n1 == 56 && n2 == 57)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
