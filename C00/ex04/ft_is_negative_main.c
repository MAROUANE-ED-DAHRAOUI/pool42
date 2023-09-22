#include <unistd.h>

void ft_is_negative(int n)
{
	char c = 'P';
	char j = 'N';

        if(n >= 0)
        {
                write(1, &c, 1);
        }
        else
        {
                write(1, &j, 1);
        }
}
int main()
{
	ft_is_negative(10);
	ft_is_negative(-5);
	ft_is_negative(0);
	ft_is_negative(-15);

	return (0);
}
