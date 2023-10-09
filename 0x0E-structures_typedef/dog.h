#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - description of dog
 * @name: name of dog
 * @owner: owner of the dog
 * @age: age of the dog
 *
 * Description: This structure creates a dog name, owner and the age of dog.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - Typedef for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
