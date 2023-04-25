#iclude "main.h"
/**
 * main - Entry point
 * Description: Prints '_putchar \n'
 * Return: 0
 */
int main(void)
{
	char str[] = "_putcar\n";
	int i = 0;

	while (str[i] !=  '\0')
	{
		char c = str[i];

		_putchar(c);
		i++;
	}
	return (0);
}
