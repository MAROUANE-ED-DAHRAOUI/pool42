#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}
int main()
{
	char arr[] = "Hello world!";
	
	ft_putstr(arr);
	return (0);
}
