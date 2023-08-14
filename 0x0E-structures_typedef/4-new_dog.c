#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, ol, i;
	dog_t *klyeb;

	if (name == NULL || owner == NULL)
	return (NULL);

	klyeb = malloc(sizeof(dog_t));
	if (klyeb == NULL)
	return (NULL);

	/*NAME STRING*/
	for (nl = 0; name[nl]; nl++)
	;
	nl++;
	klyeb->name = malloc(nl * sizeof(char));
	if (klyeb->name == NULL)
	{
		free(klyeb);
		return (NULL);
	}
	/*New dog name*/
	for (i = 0; i < nl; i++)
	klyeb->name[i] = name[i];

	klyeb->age = age;

	/*dog owner string*/
	for (ol = 0; owner[ol]; ol++)
	;
	ol++;
	klyeb->owner = malloc(ol * sizeof(char));
	if (klyeb->owner == NULL)
	{
		free(klyeb->name);
		free(klyeb);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
	klyeb->owner[i] = owner[i];
	return (klyeb);
}
