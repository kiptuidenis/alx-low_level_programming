/**
 * init_dog - Initializes structure
 * @d: struct
 * @name: name of dog
 * @age: age of the dog
 * @owner:Owner of the dog
 * Description: Longer description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
