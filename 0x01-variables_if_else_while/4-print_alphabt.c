#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints alphabet
 * @void: Empty parameter list for main.
 *
 * Dscription: Prinys the alphabet in lower cases
 * skip q and e
 * can only use putchar
 *
 * Return: 0 for success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q')
		{
			letter++;
		}
		else if (letter == 'e')
		{
			letter++;
		}
		else
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
