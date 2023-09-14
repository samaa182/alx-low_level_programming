#include "main.h"
/**
 * print_most_numbers - print 0 - 9 apart
 * from 2 and 4 and you can
 * only use _putchar twice
 * Return: always 0
 */
void print_most_numbers(void)
{
	int num1;

	for (num1 = 0; num1 <= 9; num1++)
	{
		if (num1 == 2 || num1 == 4)
			continue;
		_putchar(num1 + 48);
	}
	_putchar('\n');
}
