#include "sort.h"
/**
 *change_position - function that changes the position of the numbers
 *@array: array
 *@number1: first number
 *@number2: second number
 *@size: size of the array
 **/
void change_position(int *array, int *number1, int *number2, size_t size)
{
	int exhge_pstn = *number1;

	*number1 = *number2;
	*number2 = exhge_pstn;
	print_array(array, size);
}
/**
 *partition - partition function for the array
 *@array: array
 *@low: low
 *@high: high
 *@size: size of the array
 *Return: numero de cambios realizados
 **/
int partition(int *array, int low, int high, size_t size)
{
	int pvt = array[high];
	int Idx = low;
	int h = 0;

	for (h = low; h < high; h++)
	{
		if (array[h] <= pvt)
		{
			if (Idx != h)
				change_position(array, &array[h], &array[Idx], size);
			Idx++;
		}
	}
	if (Idx != high)
		change_position(array, &array[high], &array[Idx], size);
	return (Idx);
}
/**
 *quickSort - function to quicksort
 *@array: array
 *@low: low
 *@high: high
 *@size: size of the array
 **/
void quickSort(int *array, int low, int high, size_t size)
{
	int changes = 0;

	if (low < high)
	{
		changes = partition(array, low, high, size);
		quickSort(array, low, changes - 1, size);
		quickSort(array, changes + 1, high, size);
	}
}
/**
 *quick_sort - sorts an array of integers in ascending order
 *@array: array
 *@size: size of the array
 **/
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quickSort(array, 0, size - 1, size);
}
