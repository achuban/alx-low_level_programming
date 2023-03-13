#include "main.h"
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly copied str
*
* @str: size is char pointer
* Description: 'returns a pointer to a newly copied str'
* Return: char
*/
char *_strdup(char *str)
{
	char *s;
	int i;
	int j;

	i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
