#include <unistd.h>

void ft_print_comb(void)
{
        int i, b, c;
	i = '0';
        while(i <= '7')
        {
		b = i + 1;

                while(b <= '8')
                {
			c = b + 1;

                        while(c <= '9')
                        {
                                write(1, &i, 1);
                                write(1, &b, 1);
                                write(1, &c, 1);

				if(i != '7')
				{
					write(1, ", ", 2);
				}

				c++;
                        }
			b++;
                }
		i++;
        }
}
int main(void)
{
	ft_print_comb();
	return (0);
	
}
