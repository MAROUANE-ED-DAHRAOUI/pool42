#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb)
{
	unsigned int res = 1;
	if(nb < 0)
	{
		return (0);
	}

	while(nb > 0)
	{
		 res *= nb;
		nb--;
	}
	return (res);
}
/*int main()
{
	printf("result = %d\n", ft_iterative_factorial(5));
	printf("result = %d\n", ft_iterative_factorial(3));

	return (0);
}*/
