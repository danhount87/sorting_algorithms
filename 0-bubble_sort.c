#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array of ints to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int g, h;
	int mp;

	if (size < 2)
		return;

	for (g = 0; g < size; g++)
	{
		for (h = 0; h < size - g - 1; h++)
		{
			if (array[h] > array[h + 1])
			{
				mp = array[h];
				array[h] = array[h + 1];
				array[h + 1] = mp;
				print_array(array, size);
			}
		}
	}
}
