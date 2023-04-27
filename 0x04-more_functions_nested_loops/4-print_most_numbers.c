#include"main.h"

/**
 * print_most_numbers-print num except 2and 4
 *
 * return:void
 */

void print_most-numbers(void)
{
	char c;

	for (c='0';c,='9';c++)
	{
		if(!(=='2'||c=='4'))
			_putchar(c);
	}
	_putchar('\n');
}
