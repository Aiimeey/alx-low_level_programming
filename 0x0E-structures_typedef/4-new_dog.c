#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new instance of a dog structure.
 * @name: Pointer to a string representing the dog's name.
 * @age: Float value representing the dog's age.
 * @owner: Pointer to a string representing the dog's owner.
 *
 * Return: Pointer to the newly created dog structure, or NULL if malloc fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);


	my_dog->name = malloc(strlen(name) + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = strcpy(my_dog->name, name);

	my_dog->owner = malloc(strlen(owner) + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		free(my_dog->owner);
		return (NULL);
	}
	my_dog->owner = strcpy(my_dog->owner, owner);


	my_dog->age = age;

	return (my_dog);

}
