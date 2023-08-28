#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @n: bytes from memory area
 * @src: to memory area
 * @dest: Returns a pointer to
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	int d = n;

	for (; c < d; c++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
