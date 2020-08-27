#include "search_algos.h"


/**
 * print_array - Prints an array
 * @array: Target array
 * @l: Left index of @array
 * @r: Right index of @array
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i == r)
			printf("\n");
		else
			printf(", ");
	}
}

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: return the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t r = 0, l = 0, m = 0;

	if (!array || size == 0)
		return (-1);

	bubble_sort(array, size);

	r = size - 1;
	while (l <= r)
	{
		print_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}

/**
*bubble_sort - sort bubble
*@array: array of numbers to sort
*@size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	unsigned int swaps = 1, i;
	int tmp;

	if (array != NULL && size > 1)
		while (swaps != 0)
		{
			swaps = 0;
			for (i = 0; i < (size - 1); i++)
			{
				if (array[i] > array[i + 1])
				{
					tmp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = tmp;
					swaps = 1;
				}
			}
		}
}

/**
 *  selection_sort - function that sort a list of number wuth selection
 *  @array: given array
 *  @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j, k;
	int tmp;

	if (array != NULL && size > 1)
	{
		while (i <= (size - 2))
		{
			tmp = array[i];
			k = i;
			for (j = i + 1; j < size; j++)
			{
				if (tmp > array[j])
				{
					tmp = array[j];
					k = j;
				}
			}
			array[k] = array[i];
			array[i] = tmp;
			i++;
		}
	}
}
