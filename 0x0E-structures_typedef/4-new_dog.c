#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct dog or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *dog2;
	int ln_name = 0, ln_owner = 0, i = 0;

	dog2 = malloc(sizeof(*dog2));

	if (dog2 == NULL || !(name) || !(owner))
	{
		free(dog2);
		return (NULL);
	}

	for (; name[ln_name]; ln_name++)
		;
	for (; owner[ln_owner]; ln_owner++)
		;
	dog2->name = malloc(ln_name + 1);
	dog2->owner = malloc(ln_owner + 1);

	if (!(dog2->name) || !(dog2->owner))
	{
		free(dog2->owner);
		free(dog2->name);
		free(dog2);
		return (NULL);
	}
	for (; i < ln_name; i++)
		dog2->name[i] = name[i];
	dog2->name[i] = '\0';

	dog2->age = age;

	for (i = 0; i < ln_owner; i++)
		dog2->owner[i] = owner[i];
	dog2->owner[i] = '\0';

	return (dog2);

}
