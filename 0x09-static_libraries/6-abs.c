#include "main.h"
/**
* _abs- Print - the alphabet game
*
* @c: gets int value
* Description: 'print_alphabet program's description'
* Return: Always 0 (Succuccess)
*/
int _abs(int c)
{
	int r;

	r = 0;
	if (c < 0)
		r = -1 * c;
	else
		r  = c;

	return (r);
}
