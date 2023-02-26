#include "main.h"
/**
* _isdigit - checks if the input _is digit 
*
* @c: gets int value
* Description: 'checks if the input is is digit'
* Return: Always 0 (Succuccess)
*/

int _isdigit(int c)
{
	int r;

	r = 0;
	if (c >= 48 && c <= 57)
		r = 1;

	return (r);
}
