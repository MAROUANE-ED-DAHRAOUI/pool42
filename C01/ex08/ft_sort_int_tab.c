#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int temp;

	for(i = 0; i < size; i++)
	{
		int j = i + 1;
		while(j < size)
		{
			if(tab[i] < 0 && tab[j] < 0)
			{
				i++;
				j++;
			}
			if(tab[i] > tab[j])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
	}

}
int main()
{
	int arr[] = {5, 4, 8, 2, 6, 1, 9, 0, 3, 7, -4};
	int size = 10;

	ft_sort_int_tab(arr, size);
	
	int i = 0;
	while(i < size)
	{
		if(i == size)
		{
			printf("%d\n", arr[i]);
		}
		else
		{
			printf("%d, ", arr[i]);
		}
		i++;
	}
	return (0);
}
