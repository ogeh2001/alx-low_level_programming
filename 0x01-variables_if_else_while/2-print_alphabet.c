#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints alphabet
 * @void: Empty parameter list for main.
 *
 * Description: prints the alphabet in lower case
 * Can only use putchar
 *
 * Retrurn: 0 for success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
