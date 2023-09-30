#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb)
{
	if(nb < 0)
	{
		return (0);
	}
	else if(nb == 0)
	{	
		return (1);
	}
	else if(nb > 0)
	{
		 return (nb * (ft_iterative_factorial(nb - 1)));
	}
}
/*int main()
{
	printf("result = %d\n", ft_iterative_factorial(5));
	printf("result = %d\n", ft_iterative_factorial(3));

	return (0);
}*/
