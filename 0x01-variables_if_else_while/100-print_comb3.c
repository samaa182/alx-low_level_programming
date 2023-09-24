#include <stdio.h>
/**
 * main - entry point
 * Description: print all possible different
 * combination of two digits
 * Return: always 0
 */
int main(void)
{
	int s = 0, m;

	while (s <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			if (s != m && s < m)
			{
				putchar(s + 48);
				putchar(m + 48);

				if (s + m != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		s++;
	}
	putchar('\n');

	return (0);
}
