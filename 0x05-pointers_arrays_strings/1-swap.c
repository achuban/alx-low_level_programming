#include "main.h"
/**
* swap_int - swap two int's
*
* @a: a is a ponter to int data type
* @b: a is a ponter to int data type
* Description: 'swap two int's'
*/
void swap_int(int *a, int *b)
{
	int s;
	
	s = *a;
	*a = *b;
	*b = s;
}
