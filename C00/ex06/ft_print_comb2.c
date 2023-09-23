#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void print_comb1(int a, int b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
	
}
void ft_print_comb2(void)
{
	int a, b;

	a = 0;

	while(a < 99)
	{
		b = a + 1;

		while(b <= 99)
		{	
			 if(a < 99 && b <= 99)
                         {
                                print_comb1(a, b);
				if(a != 98)
				{
                                	write(1, ", ", 2);
				}
                          }

			b++;
		}
		a++;
	}
}
/*int main()
{
	ft_print_comb2();
	return (0);
}*/
