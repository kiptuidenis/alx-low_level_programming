#include "dog.h"
#include <stdio.h>

/**
 *print_dog - prints struct dog
 *@d: pointer to struct dog
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("%s", "");
	if (d->name == NULL && &(d->age) != NULL && d->owner != NULL)
		printf("Name: (nil)\nAge: %.6f\nOwner: %s\n", d->age, d->owner);
	if (&(d->age) == NULL && d->owner != NULL && d->name != NULL)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
	if (d->owner == NULL && &(d->age) != NULL && d->name != NULL)
		printf("Name: %s\nAge: %.6f\nOwner: (nil)\n", d->name, d->age);
	if (d->name == NULL && d->owner == NULL && &(d->age) == NULL)
		printf("Name: (nil)\nAge: (nil)\nOwner: (nil)\n");
	if (d->name == NULL && d->owner == NULL && &(d->age) != NULL)
		printf("Name: (nil)\nAge: %.6f\nOwner: (nil)\n", d->age);
	if (d->name == NULL && d->owner != NULL && &(d->age) == NULL)
		printf("Name: (nil)\nAge: (nil)\nOwner: %s\n", d->owner);
	if (d->name != NULL && d->owner == NULL && &(d->age) == NULL)
		printf("Name: %s\nAge: (nil)\nOwner: (nil)\n", d->name);
	if (d->name != NULL && d->owner != NULL && &(d->age) != NULL)
	{
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age,
		       d->owner);
	}
}
