#include"main.h"
/**
 * _puts-prints a string,followed by anew line,to stdout
 * @str: string to print
 */
void_puts(char*str)
{
	while(*str!='\0')
	{
		_putchar(*str++);
	}
	        _putchar('\0');
}
