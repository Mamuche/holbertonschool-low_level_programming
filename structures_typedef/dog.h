#ifndef DOG_H
#define DOG_H

/**
 * struct dog - identitfication of dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 prototype
*/

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
