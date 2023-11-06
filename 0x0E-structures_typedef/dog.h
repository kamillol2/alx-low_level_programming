#ifndef DOG_H
#define DOG_H
/**
 *struct dog- create carateristique list of dog
 *@name: name of dog
 *@age: age of dog
 *@owner: posessor of dog
 *
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
#endif /* DOG_H */
