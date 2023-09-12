#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct declaration
 * @name: the name in the structure
 * @age: the age
 * @owner: the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);

#endif
