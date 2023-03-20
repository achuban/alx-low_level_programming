#include "main.h"
/**
* init_dog -  init dog struct
*
* @d: d is dog struct
* @name: name is dog struct
* @age: age is dog struct
* @owner: owner is dog struct
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = mallco(sizeoff(struct dog));
	if (d == NULL)
		return (NULL);
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
