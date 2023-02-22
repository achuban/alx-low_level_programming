#include "main.h"
/**
* _islower - Print - the alphabet game
*
* Description: 'print_alphabet program's description'
* Return: Always 0 (Succuccess)
*/
int _islower(int c)
{
	int r;

	r = 0;
	if (c > 96 && c < 123)
		r = 1;

	return (r);
}
