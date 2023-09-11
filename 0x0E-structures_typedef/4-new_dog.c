#include "dog.h"
#include <stdlib.h>

/**
 * new_dog -new dog to be created
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int ml, ol, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (ml = 0; name[ml] != '\0'; ml++)
		;
	ml++;
	dog->name = malloc(sizeof(char) * ml);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < ml; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ol = 0; owner[ol] != '\0'; ol++)
		;
	ol++;
	dog->owner = malloc(sizeof(char) * ol);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
