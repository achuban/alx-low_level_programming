#include "main.h"
/**
* _strstr -  finds the first occurrence of the substring
*
* @haystack: haystack is a ponter to char to searched
* @needle: needle is a ponter char to find
* Description: 'finds the first occurrence of the substring'
* Return: s or Null
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int s;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
				if (s < 0)
				{
					s = i;
					j++;
					break;
				}
		}
	}
	if (s >= 0)
		return (&haystack[s]);
	return ('\0');
}
