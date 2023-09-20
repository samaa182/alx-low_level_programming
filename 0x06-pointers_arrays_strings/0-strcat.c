#include "main.h"
/**
 * _strcat - function that concatenates teo strings
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int c = 0;
	int b = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		c++;

	for (i = 0; src[i] != '\0'; i++)
		b++;

	for (i = 0; i <= b; i++)
	{
		dest[c = i] = src[i];
	}
	return (dest);
}
