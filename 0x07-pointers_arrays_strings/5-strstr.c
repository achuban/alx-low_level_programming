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
	int k;
	int l;
	int s;
	int t;

	i = 0;
	j = 0;
	t = 0;
	while (needle[j] != '\0')
		j++;
	
	while (haystack[i] != '\0')
		i++;
	
	if (j == 0)
		return (haystack);

	for (k = 0; haystack[k] != '\0'; k++)
	{
		if (haystack[k] == needle[0])
		{
			s = k;
			for (l = 0; l < j; l++)
			{
				if (haystack[k + l] == needle[l])
					t++;
			}
		}
	}
	if (t == j)
		return (&haystack[s]);
	return ('\0');
}
