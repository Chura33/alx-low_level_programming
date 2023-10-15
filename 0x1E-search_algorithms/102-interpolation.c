#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
* interpolation_search - uses interpolation to search
* @array: pointer to first array element
* @size: size
* @value: value to search for
* Return: returns an int
*/

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		mid = low + ((value - array[low]) *
(high - low) / (array[high] - array[low]));
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
		mid = low + ((value - array[low]) *
(high - low) / (array[high] - array[low]));
	printf("Value checked array[%d] is out of range\n", mid);
	return (-1);
}
