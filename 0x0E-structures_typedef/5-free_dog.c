#include <stdio.h>
#include "dog.h"

/**
* free_dog - it frees the struct dog
* @d: pointer to struct dog_t
*/
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
