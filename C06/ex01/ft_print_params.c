#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int argc, char *argv[])
{
	int i = 0;
	int j = 1;

	while(j < argc)
	{
		 if(argv[j][i] != '\0')
		 {
			ft_putchar(argv[j][i]);
                 	i++;
		 }
		
		if(argv[j][i] == '\0')
                 {
                        ft_putchar('\n');
                         i = 0;
                         j++;
                 }
	}
	return (0);
}
