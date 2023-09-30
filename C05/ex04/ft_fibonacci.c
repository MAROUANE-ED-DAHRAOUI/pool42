#include <unistd.h>
#include <stdio.h>

int ft_fibonacci(int index)
{
	if(index < 0)
		return (-1);
	
	if(index < 2)
		return (index);

	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*int main()
{
	printf("%i\n", ft_fibonacci(7));
	return (0);
}*/
