#include <stdio.h>
#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
	if(power < 0)
	{
		return (0);
	}
	else if(power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	
}
int main()
{
	printf("%d\n", ft_recursive_power(3, 4));
	 printf("%d\n", ft_recursive_power(2, 4));
	return (0);
}
