#include "sort.h"

/**
 * swap_ints - swap two integers
 * @a: paremeter of the first interger to swap
 * @b: paremeter of the second integer to swap
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * bubble_sort - sort an array of integer in ascending order
 * @array: an array of integer to sort
 * @sort: size of the array
 *
 * description: print the array after each swap
 */
void buble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i +1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
