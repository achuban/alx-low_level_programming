#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* init_dog -  init dog struct
*
* @d: d is dog struct
* @name: name is dog struct
* @age: age is dog struct
* @owner: owner is dog struct
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
