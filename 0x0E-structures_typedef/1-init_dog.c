#include "dog.h"
/**
 * init_dog - initializes variables of struct dog
 * @d:structure variable
 * @name:name of dog
 * @age:Dog's age
 * @owner:dogs owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
