#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	int temp = 0;

	while(i < size / 2)
	{
			temp = tab[i];
			tab[i] = tab[size - 1 - i];
			tab[size - 1 - i] = temp;
			i++;
	}
}
/*int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int size = 6;

	ft_rev_int_tab(arr, size);

	int i = 0;
	while(i < size)
	{
		if(i + 1 == size)
		{
			printf("%d\n", arr[i]);
		}
		else
		{
			printf("%d,", arr[i]);
		}
		i++;
	}
	return (0);
}*/
