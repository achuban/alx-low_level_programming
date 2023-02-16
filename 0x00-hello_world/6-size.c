#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	short shortInt;
	int intType;
	float floatType;
	double doubleType;

	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of an int: %zu byte\n", sizeof(shortInt));
	printf("Size of long int: %zu bytes\n", sizeof(intType));
	printf("Size of long long: %zu bytes\n", sizeof(doubleType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	return (0);
}
