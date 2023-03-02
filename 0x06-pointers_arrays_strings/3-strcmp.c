#include "main.h"
/**
* _strcmp - compare two string
*
* @s1: s1 first param, is a pointer to char
* @s2: s2 second param, is a pointer to char
* Return: int 
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int r;

	r = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] =! s2[i])
		{
			if (s1[i] > s2[i])
				r = 1;
			else if (s1[i] =! s2[i])
				r = -1;
			break;
		}
	}
	return (r);
}
