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

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
