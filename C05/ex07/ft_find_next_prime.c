#include <stdio.h>
#include <unistd.h>

int ft_prime(int nb)
{
	int j = 2;
	if(nb < j)
	{
		return (0);
	}
	while(j <= (nb / j))
	{
		if(nb % j == 0)
		{
			return (0);
		}
		j++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	if(nb < 2)
	{
		return (2);
	}
	
	while(nb >= 2)
	{
		if(ft_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}
/*int main()
{
	printf("%d -> %d\n", -544, ft_find_next_prime(-544));
        printf("%d -> %d\n", -13, ft_find_next_prime(-13));
        printf("%d -> %d\n", 0, ft_find_next_prime(0));
        printf("%d -> %d\n", 1, ft_find_next_prime(1));
        printf("%d -> %d\n", 2, ft_find_next_prime(2));
        printf("%d -> %d\n", 27, ft_find_next_prime(27));
        printf("%d -> %d\n", 1999, ft_find_next_prime(1999));
        printf("%d -> %d\n", 1337, ft_find_next_prime(1337));
        printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));
	
	return (0);
}*/
