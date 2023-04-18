#include <stdlib.h>
/**
 * free_dog - malloc
 * @d:integer
 * Return:free
 **/
void free_dog(dog_t *d)
{
	typedef struct
{
        char *name;
        int age;
};

	if (d != NULL)
	{
		free(d->name);
		free(d);
	}
}

