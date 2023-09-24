#include <stdio.h>
/**
 * main - Entry point
 * Description: point all aplhabet letters
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
