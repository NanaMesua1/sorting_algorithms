#include "sort.h"
/**
 * bubble_sort - a function to print the array after each time
 * you swap two elements
 * @array: pointer to array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t m, n, o;

	for (m = 0; m < size; m++)
	{
		for (n = 1; n < size - m; n++)
		{
			if (array[n - 1] > array[n])
			{
				o = array[n];
				array[n] = array[n - 1];
				array[n - 1] = o;
				print_array(array, size);
			}
		}
	}
}
