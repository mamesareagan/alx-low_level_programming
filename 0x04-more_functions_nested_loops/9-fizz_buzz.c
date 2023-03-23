#include <stdio.h>
/**
 * main - print 1-100 and fizz buzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	for (a  = 1; a <= 100; a++)
	{
		if ((a % 3) == 0 && (a % 5) == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz");
			if (a == 100)
			{
				continue;
			}
			putchar(' ');
		}
		if ((a % 3) == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else
		{
			printf("%d", a);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
