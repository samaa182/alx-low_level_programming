#include "main.h"
/**
 * last_index - returns the last index of a string (counts the null char)
 * @s: pointer the string
 *Return: int
*/
int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0'}
			n += last_index(s + 1) + 1;

	return (n);
}
/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
int end = last_indes(s);

return (check(s, 0, end - 1, mod));
}
