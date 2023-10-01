#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while(s1[i] != '\0' && s2[i] != '\0')
	{
		if(s1[i] > s2[i] || s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
void ft_swap(char **s1, char **s2)
{
	char *Temp;

	Temp = *s1;
	*s1 = *s2;
	*s2 = Temp;
	
}
int main(int argc, char *argv[])
{
	int i = 0;
	int j;
	int k = 1;
	
	while (k < argc - 1)
	{
		j = 1;
		while(j < argc - 1)
		{
			if(ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		k++;
	}

	j = 1;

	while(j < argc)
	{
		i = 0;
		while(argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}
