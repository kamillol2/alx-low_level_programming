#include"dog.h"
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
	d->age = age;
	d->name = name;
	d->owner = owner;

}
