#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* this is the beginning og the code */
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
