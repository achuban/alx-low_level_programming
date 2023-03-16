#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings
*
* @s1: s1 is char pointer
* @s2: s2 is char pointer
* @n: n is unsigned int
* Description: 'concatenates two strings until n'
* Return: char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int k;
	unsigned int j;
	unsigned int m;

	i = 0;
	k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		return (NULL);
	while (s1[i])
	{
		i++;
	}
	while (s2[k])
	{
		k++;
	}
	m = (n >= k) ? k : n;
	s = malloc((i + m + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		s[j] = s1[j];
	}
	for (j = 0; j < m; j++)
	{
		s[j + i] = s2[j];
	}
	s[j + i] = '\0';
	return (s);
}
