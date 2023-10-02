#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *ptr;
	int size = max - min;

	ptr = malloc(size * sizeof(int));

	if(min >= max)
	{
		return (0);
	}

	int i = 0;
	while(min <= max - 1)
	{
		min++;
		if(min == max)
		{
			break;
		}
		ptr[i] = min;
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
int main()
{
	int *arr;
	arr = ft_range(5, 20);
	int i = 0;

	while(arr[i] != '\0')
	{
		printf("%i ", arr[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
