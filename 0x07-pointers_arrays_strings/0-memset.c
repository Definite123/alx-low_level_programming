#include "main.h"
/**
 * _memset - fuction that fills the memories with a constant byte
 * @n: bytes of the memory area pointed to by
 * @s: with the constant byte
 * @b: Returns a pointer to the memory area
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int y = 0;

	for (; n > 0; y++)
	{
		s[y] = b;
		n--;
	}
	return (s);
}

