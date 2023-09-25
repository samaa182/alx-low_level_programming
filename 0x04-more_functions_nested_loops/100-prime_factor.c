#include "main.h"
/**
 * sqrt - finds the square root
 * @x: input number
 * Return: square root of x
 */
double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest-prime_factor - finds and prints the largest
 * prime factor of number (num)
 * @num: number to find
 */
void largest_prime_factor(long int num)
{
	int prm, largest;

	/*first divide with the smallest prime number (two)*/
	while (num % 2 == 0)
		num = num / 2;

	/*num must be odd so we proceed to the next prime number */
	for (prm = 3; prm <= sqrt(num); prm += 2)
	{
		while (num % prm == 0)
		{
			num = num / prm;
			largest = prm;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
