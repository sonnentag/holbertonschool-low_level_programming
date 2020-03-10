#ifndef DOG
#define DOG

/**
 * struct dog - info needed for dogs
 * @name: dog's anme
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
