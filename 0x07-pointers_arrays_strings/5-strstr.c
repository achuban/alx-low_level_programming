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
	int t;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		t = i;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[t] == needle[j])
				if (s < 0)
				{
					s = i;
					t++;
					break;
				}
		}
	}
	if (s >= 0)
		return (&haystack[s]);
	return ('\0');
}
