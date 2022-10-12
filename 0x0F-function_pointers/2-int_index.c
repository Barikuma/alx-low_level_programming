#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to iterate
 * @size: size of the array
 * @cmp: function pointer
 * Return: -1 if size <= 0 or if the integer wasn't found,
 * else the index of the number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (0);
	}


	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
