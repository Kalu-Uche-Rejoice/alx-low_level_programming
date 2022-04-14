#ifndef DOG
#define DOG
/**
 * struct dog - initialize variable
 * @name: name of dog
 * @age: type float
 * @owner: type string
 *
 * Description: A structure describing a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
/**
 * init_dog - initialize a variable of type dog
 * @d: structure to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
