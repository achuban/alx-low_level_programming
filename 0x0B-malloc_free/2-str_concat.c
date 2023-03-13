#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenates two strings
*
* @s1: s1 is char pointer
* @s2: s2 is char pointer
* Description: 'concatenates two strings'
* Return: char
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i;
	int k;
	int j;

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
	s = malloc((i + k + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		s[j] = s1[j];
	}
	for (j = 0; j <= k; j++)
	{
		s[j + i] = s1[j];
	}
	return (s);
}
