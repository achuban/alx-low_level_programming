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
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * (i + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = malloc(sizeof(char) * (j + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		d->name[k] = name[k];
	for (k = 0; k <= j; k++)
		d->owner[k] = owner[k];
	return (d);
}
