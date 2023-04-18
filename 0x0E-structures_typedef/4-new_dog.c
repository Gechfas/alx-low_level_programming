#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - a function that creates a new dog.
 *@name:a pointer to the name of the new dog.
 *@owner:a pointer to the owner's name of the new dog.
 *@age: the age of the new dog.
 *Return:a pointer to the new dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *P;
	int len_n = 0;
	int len_o = 0;
	int a, b, i, j;

	P = malloc(sizeof(*P));
	if (!P || !name  || !owner)
	{
		free(P);
		return (NULL);
	}
	for (a = 0; name[a]; a++)
		len_n = a + 1;
	for (b = 0; owner[b]; b++)
		len_o = b + 1;
	P->name = malloc(len_n + 1);
	P->owner = malloc(len_o + 1);
	if (P->name == NULL || P->owner == NULL)
	{
		free(P->name);
		free(P->owner);
		free(P);
		return (NULL);
	}
	for (i = 0; i < len_n; i++)
	{
		P->name[i] = name[i];
	}
	P->name[i] = '\0';
	for (j = 0; j < len_o; j++)
	{
		P->owner[j] = owner[j];
	}
	P->owner[j] = '\0';
	P->age = age;
	return (P);
}
