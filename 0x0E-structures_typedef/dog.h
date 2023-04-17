#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
/**
 * struct dog - has dogname,age and owner
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: all about dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* DOG_H*/

