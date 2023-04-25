#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: a function that print the alphabet,
 * in lowercase followed by a new line 
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
