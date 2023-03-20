#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* new_dog -  new dog struct
*
* @name: name is first element
* @age: age is second element
* @owner: owner is third element
* Return: dog_t
*/
dog_t *new_dog(char *name, float age, char *owner);
{
	dog_t d;

	d = malloc(sizeof(dog_t);
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
