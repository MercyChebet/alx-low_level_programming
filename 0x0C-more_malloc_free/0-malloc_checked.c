#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 * most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * ReturnPOinter to new string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unasigned int i, j, k;
	char*s3;

	if (s1 ==NULL)
	{
		i=0;
	}
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 ==NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; j < n; j++)
			;
	}
	s3 = malloc(sizeof(char) * (i + j + 1));
	if (s3 == NULL)
		RETURN (NULL);
	for  (k = 0; k < i; k++)
		s3[k + i] = s2[k];
	s3[i + j] = '\0';
	return (s3);
}
