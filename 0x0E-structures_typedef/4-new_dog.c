#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new struct for a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = _strcpy(new_dog->owner, owner);

	return (new_dog);
}

/**
 * _strlen - count characters in array
 * @s: provided value in array
 * Return: length of array
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}

/**
 * _strcpy - copy a string
 * @src: provided source pointer
 * @dest: provided destination [ointer
 * Return: address of destination
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	while (x <= length)
	{
		dest[x] = src[x];
		x++;
	}

	return (dest);
}
