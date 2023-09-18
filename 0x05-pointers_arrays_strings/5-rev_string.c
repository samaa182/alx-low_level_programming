#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string parameter input
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i;
	int temp = 0;

	/*find string length without null char */
	for (i = 0; s[i] != '\0'; i++)
		;

	/*swap the string by looping to half the string */
	for (i = 0; i < temp / 2; i++)
	{
		char j;

		j = s[i];
		s[i] = s[temp - 1 - i]; /*-1 becouse the arrsy starts from 0 */
		s[temp - 1 - i] = j;
	}
}
