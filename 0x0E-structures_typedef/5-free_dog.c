#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dogs
 * @d: struct dog
 * @dog_t: dog type
 * Return: No return
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
