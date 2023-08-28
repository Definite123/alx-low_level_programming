#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @c: Returns a pointer to the first occurrence of the character
 * @s: in the string
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);

	}
	return (0);
}
