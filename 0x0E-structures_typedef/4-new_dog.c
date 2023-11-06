#include"dog.h"
/**
 *new_dog- create a new struct of dog
 *@name: pointer to name
 *@age: age of dog
 *@owner: pointer of owner of dog
 *
 * Return: pointer to the dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	char *owner_copy = malloc(strlen(owner) + 1);

	if (owner_copy == NULL)
	{
		free(owner_copy);
		return (NULL);
	}
	char *name_copy = malloc(strlen(name) + 1);

	if (name_copy == NULL)
	{
		free(name);
		return (NULL);
	}
	strcpy(name, name_copy);
	strcpy(owner, owner_copy);
	if (new_dog != NULL)
	{
		new_dog->age = age;
		new_dog->name = name_copy;
		new_dog->owner = owner_copy;
		return (new_dog);
	}
	return (NULL);
}
