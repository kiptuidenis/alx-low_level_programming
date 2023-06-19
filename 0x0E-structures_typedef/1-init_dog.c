#include <stdio.h>
#include "dog.h"

/**
 *init_dog - initializes structure dog
 *@d: pointer to structure dog
 *@name: name of dog
 *@age: age of dog
 *@owner: Owner of dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->age = age;
	d->name = name;
	d->owner = owner;
	}
}
