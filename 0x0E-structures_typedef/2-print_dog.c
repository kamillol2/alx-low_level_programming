#include"dog.h"
/**
 *print_dog- print the caraq of struct dog
 *@d: pointer to struct dog
 *
 *Return: nothing
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		if (d->age <= 0)
		{
			printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
			exit(0);
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
