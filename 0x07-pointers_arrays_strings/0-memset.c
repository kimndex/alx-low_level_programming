#include <main.h>
/*
 * main - main function
 * Description: fills memory with a constant byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (0);
}