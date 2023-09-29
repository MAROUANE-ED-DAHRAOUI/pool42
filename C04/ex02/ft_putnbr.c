#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if(nb >= 0 && nb < 10)
	{
		ft_putchar(nb + 48);
	}
	
}
/*int main()
{
	ft_putnbr(42);
	putchar('\n');
	 ft_putnbr(150);
	putchar('\n');
	 ft_putnbr(-20);
	putchar('\n');
	 ft_putnbr(4235);
	putchar('\n');

	return (0);
}*/
