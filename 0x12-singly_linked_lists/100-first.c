#include "lists.h"

void comefirst(void)__attribute__((constructor));
/**
 * comefirst -function that runs before the main function
 */
void comefirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
