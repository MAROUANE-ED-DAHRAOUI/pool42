#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_str_is_printable(char c)
{
	if(c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
void ft_putstr_non_printable(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(ft_str_is_printable(str[i]) == 1)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}

		i++;
	}
	
}
/*int main()
{	
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	ft_putchar('\n');
	ft_putstr_non_printable("Coucou\ntu vas\t\v\n bien ?");
	ft_putchar('\n');

	return (0);
}*/
