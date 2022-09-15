#include <stdio.h>

/**
 * main - main block
 * Description: print the first 50 fibonacci numbers, starting with 1 and 2.
 * numbers must be separated with a coma and space
 * Return: 0
 */

int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
