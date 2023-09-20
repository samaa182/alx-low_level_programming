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
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/*interate through each src array value without the null byte*/
	for (b = 0; src[b]; b++)
		/*append src[b] to dest[c] while overwritting the null byte in dest*/
		dest[c++] = src[b];

	return (dest);

}
