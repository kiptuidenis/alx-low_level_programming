#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 *struct dog - dog structure
 *@name:  name of dog
 *@age: age of dog
 *@owner: Owner of dog
 *
 *Description:Structure of type dog that contains the name,
 *age and owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

#endif
