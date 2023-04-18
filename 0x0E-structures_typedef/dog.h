#ifndef POPPY
#define POPPY
/**
  * struct dog - a structure for dogs
  * @name: dog name
  * @age: dog age
  * @owner: dog owner name
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
