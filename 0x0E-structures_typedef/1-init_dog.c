#include <stdio.h>
#include "dog.h"
/**
* init_dog - intialize struct
* @name: name of the dog
* @owner: name of the owner
* @age: age
* @d: pointer
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	(*d).age = age;
	(*d).owner = owner;
}
