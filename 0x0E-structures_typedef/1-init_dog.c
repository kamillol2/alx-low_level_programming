#include"dog.h"
#include<stdio.h>
/**
 *init_dog- initialize the struct dog
 *@d: pointer to struct
 *@age: age of dog
 *@name: pointer to name of dog
 *@owner: pointer to owenr of dog
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
