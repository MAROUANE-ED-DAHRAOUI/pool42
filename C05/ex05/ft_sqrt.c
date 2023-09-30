#include <stdio.h>
#include <unistd.h>

int _sqrt(int nb, int i)
{
	if(i * i == nb)
	{
		return (i);
	}
	else if(i >= nb)
	{
		return (0);
	}
	else
	{
		return (_sqrt(nb, i + 1));
	}
}
int ft_sqrt(int nb)
{
	if(nb <= 0)
	{
		return (0);
	}	
	else
	{
		return (_sqrt(nb , 2));
	}
}
/*int main()
{
	printf("%i\n", ft_sqrt(25));
	printf("%i\n", ft_sqrt(81));
	return (0);
}*/
