#ifndef DOG_H
#define DOG_H
/**
 * struct dog - This function is used to make a dogs basic info
 * @name: This is the dog's first member
*@owner: This is the Dog's Third member
 *@age: This is the Dog's second member
*/
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - This stands for the typedef struct dog
*@d: This is the dog variable
*/
typedef struct dog dog_t;
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
