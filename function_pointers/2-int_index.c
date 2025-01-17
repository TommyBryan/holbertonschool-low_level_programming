#include "function_pointers.h"
/**
 * int_index - busca un Integer
 * @array: arreglo para explorar
 * @size: tamano del arreglo
 * @cmp: comparar
 * Return: devuelve  valor o -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((cmp)(array[i]))
				return (i);
		}
		return (-1);
	}
	return (-1);
}
