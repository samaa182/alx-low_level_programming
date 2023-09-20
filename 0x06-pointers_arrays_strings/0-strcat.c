#include "main.h"
/**
 * _strcat - function that concatenates teo strings
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int c, b;

	c = 0;
	while (dest[c])
		c++;

	for (b = 0; src[b]; b++)
		dest[c++] = src[b];

	return (dest);

}
