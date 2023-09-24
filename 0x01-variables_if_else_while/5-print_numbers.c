#include <stdio.h>
/**
 * main - entry point
 * DEscription: print all single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int s = 0;

	while (s <= 9)
	{
		printf("%d", s);
		s++;
	}
	printf("\n");

	return(0);
}
