#include <stdio.h>
#include <unistd.h>

int _power(int nb, int pow)
{
	int res = 1;
	while(pow > 0)
	{
		 res *= nb;
		 pow--;
	}
	return (res);
}
int ft_iterative_power(int nb, int power)
{
	if(power == 0)
	{
		return (1);
	}
	else if(power < 0)
	{
		return (0);
	}
	else
	{
		return (_power(nb, power));
	}
	
}
/*int main()
{
	printf("%i\n", ft_iterative_power(3, 4));
	return (0);
}*/
