#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, pen1 = 0, pen2 = 0;


	while (s1 && s1[pen1])
		pen1++;
	while (s2 && s2[pen2])
		pen2++;

	if (n < pen2)
		s = malloc(sizeof(char) * (pen1 + n + 1));
	else
		s = malloc(sizeof(char) * (pen1 + pen2 + 1));

	if (!s)
		return (NULL);

	while (i < pen1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < pen2 && i < (pen1 + n))
		s[i++] = s2[j++];

	while (n >= pen2 && i < (pen1 + pen2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}

