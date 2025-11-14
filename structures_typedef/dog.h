#ifndef DOG
#define DOG
/**
 * struct dog - gives structure to dog
 * @name : name
 * @age : age
 * @owner: owner
 * Return: void
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
