#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Print  struct dog y verifica si esta vacio o no
 * @d: puntero
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
