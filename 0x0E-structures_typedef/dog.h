#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: Longer description
 */



struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
typedef struct dog god_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
