#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog -a strcut that creates a dog's information
 * @name: the name of the dog
 * @age: the age of dog
 * @owner: the owner of the dog
 * Description: struct with dog's info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* dog.h */
