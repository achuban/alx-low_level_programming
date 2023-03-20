#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* free_dog -  free dog struct
*
* @d: d is struct
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
