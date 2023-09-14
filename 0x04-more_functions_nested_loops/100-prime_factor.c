#include "main.h"
/**
 * sqrt - finds the square root
 * @x: input number
 * Return: square root of x
 */
double sqrt(double x)
{
	float sqrt, tap;

	sqrt = x / 2;
	tap = 0;

	while (sqrt != tap)
	{
		tap = sqrt;
		sqrt = (x / tap + tap) / 2;
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
