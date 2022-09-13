#include "main.h"

/**
 * main - pints the word _putchar
 *
 * Return: 0 for success
 */

int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
