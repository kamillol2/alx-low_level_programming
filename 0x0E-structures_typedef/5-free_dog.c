#include"dog.h"
#include<stdlib.h>
/**
 *free_dog- free the memory used by the struct
 *@d: pointer to the struct
 *
 *
 *
*/
void free_dog(dog_t *d)
{
	free(d);
}
