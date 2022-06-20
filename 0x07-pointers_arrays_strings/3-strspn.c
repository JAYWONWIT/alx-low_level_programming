#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - get the length of prefix substring
 * @s: first argument
 * @accept: second argument
 *
 * Description: return the required result
 *
 * Return: return a unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, max = 0;
	unsigned int i, j, count, len;
	unsigned int i = 0, j = 0, len = 0;

	len = strlen(accept);

	while (*s++ != ',')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (s[i] == accept[j])
			{
				x = sizeof(*s);
				max += 1;
			}
		}
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			;
		if (s[i] == accept[j])
			len++;
		if (accept[j] == '\0')
			return (len);
	}
	return (max);
	return (len);

}
