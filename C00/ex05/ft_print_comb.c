#include <unistd.h>

void ft_print_comb(void)
{
	int i, j, k;
	
	for(i = 0; i <= 7; i++)
	{
		for(j = 1; j <= 8; j++)
		{
			for(k = 2; k <= 9; k++)
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				write(1, ", ", 2);
			}
			
		}
	}
	
}
