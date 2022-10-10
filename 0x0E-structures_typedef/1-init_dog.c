#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* init_dog - initialize a variable of type struct dog
* @d: pointer to struct
* @name: first element
* @age: second element
* @owner: third element
* Return: NULL if null, dog if not null.
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
