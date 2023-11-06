#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
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
	new_dog->age = age;
	new_dog->name = name;
	new_dog->owner = owner;
	return (new_dog);
}
