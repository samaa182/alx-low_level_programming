#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number where the bit should be cleared.
 * @index: The index of the bit, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n &= ~(1ul << index);
return (1);
}
