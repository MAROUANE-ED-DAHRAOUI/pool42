#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);	
}
void ft_putnbr(int nb)
{
	 if(nb > 9 && nb < 100)
	 {
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	 }
	else if(nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
		ft_putnbr(nb);
	}
	else if(nb > 99)
	{
		ft_putnbr(nb / 100);
		ft_putnbr((nb / 10) % 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
/*int main()
{
	ft_putnbr(42);
	putchar('\n');
	ft_putnbr(-3);
	putchar('\n');
	ft_putnbr(320);
	putchar('\n');
	ft_putnbr(4);
	putchar('\n');
	
	return (0);
}*/
