#include "sort.h"

/**
 * selection_sort - sorts an array following the selection sort algorithm
 * @array: array to sort
 * @size: size of the array;
 */
void selection_sort(int *array, size_t size)
{
	unsigned int k, l, mn;

	register int mp;

	if (size < 2)
		return;

	for (k = 0; k < size; k++)
	{
		mn = k;
		for (l = k + 1; l < size; l++)
		{
			if (array[l] < array[mn])
				mn = l;
		}
		mp = array[k];
		array[k] = array[mn];
		array[mn] = mp;
		if (k != mn)
			print_array(array, size);
	}
}
