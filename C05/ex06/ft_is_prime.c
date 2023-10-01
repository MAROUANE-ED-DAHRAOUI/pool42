#include <stdio.h>
#include <unistd.h>

int ft_is_prime(int nb)
{
	int i = 2;
	if(nb <= 1)
	{
		return (0);
	}

	while(i <= (nb / 2))
	{
		if(nb % i == 0)
			return (0);
		else
			i++;
	} 
	return (1);
}
/*int main()
{
	printf("%d -> %d\n", 13, ft_is_prime(13));
        printf("%d -> %d\n", 11, ft_is_prime(11));
        printf("%d -> %d\n", 7, ft_is_prime(7));
        printf("%d -> %d\n", 5, ft_is_prime(5));
        printf("%d -> %d\n", 3, ft_is_prime(3));
        printf("%d -> %d\n", 27, ft_is_prime(27));
        printf("%d -> %d\n", 1337, ft_is_prime(1337));
        printf("%d -> %d\n", 2147483647, ft_is_prime(2147483647));
	
	return (0);
}*/
