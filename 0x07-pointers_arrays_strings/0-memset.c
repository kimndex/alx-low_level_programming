#include "main.h"
/**
 * main - main function
 * Description: fills memory with a constant byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n);
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
