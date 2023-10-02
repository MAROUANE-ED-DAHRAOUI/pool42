#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int *ptr;
	int size = max - min;

	ptr = malloc(size * sizeof(int));

	if(!ptr || min >= max)
	{
		*range = 0;
		return (-1);
	}
	
	int i = 0;
	*range = ptr;
	while(i < size && min < max - 1)
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

	return (size);
}
/*int main()
{
	int *arr;
	int size;
	int i = 0;
	size = ft_ultimate_range(&arr,10, 40);
	
	while(i < size - 1)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	putchar('\n');
	return (0);
}*/
