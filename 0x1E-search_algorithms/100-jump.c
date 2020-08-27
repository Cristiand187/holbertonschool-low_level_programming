#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the jump search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: return the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t  i = 0, jump_start = 0, jump_end = 0, step  = 0;

	if (!array || size == 0)
		return (-1);
	step = sqrt(size);
	printf("Value checked array[%lu] = [%d]\n", jump_start, array[jump_start]);

	while (array[jump_end] < value)
	{
		jump_start = jump_end;
		jump_end = jump_end + step;
		if (jump_start != 0)
			printf("Value checked array[%lu] = [%d]\n", jump_start, array[jump_start]);
		if (jump_end >= size)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", jump_start, jump_end);
	if (jump_end >= size)
		jump_end = size - 1;
	for (i = jump_start; i <= jump_end; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
