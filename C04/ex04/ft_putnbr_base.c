#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int strlen(char *ptr)
{
	int i = 0;
	while(ptr[i] != '\0')
	{
		i++;
	}
	return (i);
}
int invalidarg(char *str)
{
	int i = 0;
	int j = 0;
	int len = strlen(str);
	
	if(len <= 1)
		return (0);

	while(str[i])
	{
		if(str[i] == '+' || str[i] == '-')
			return (0);

		j = i + 1;
		while(str[j])
		{
			if(str[j] == str[i])
				return (0);
			
			j++;
		}
		i++;
	}
	return (1);
}
void ft_putnbr_base(int nbr, char *base)
{
	int len = strlen(base);

	if(invalidarg(base) == 1)
	{	
		if(nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		
		if(nbr >= len)
		{
			ft_putnbr_base(nbr / len, base);
			ft_putnbr_base(nbr % len, base);
		}
		else if(nbr < len)
		{
			ft_putchar(base[nbr]);
		}
	}
}
/*int main()
{
	ft_putnbr_base(-12, "01");
    	printf("\n");
    	ft_putnbr_base(30, "poneyvif");
   	 printf("\n");
    	ft_putnbr_base(8947, "0123456789");
    	printf("\n");
    	ft_putnbr_base(535, "0123456789abcdef");
	
	return (0);
}*/
