#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int digit = 0;

	while(str[i] != '\0')
	{
		if(str[i] == '-')
		{
			sign = -sign;	
		}

		while(str[i] >= 48 && str[i] <= 57)
		{
			digit = digit * 10 + (str[i] - 48);

			i++;

			if(str[i] < 48 || str[i] > 57)
			{
				return (digit * sign);
			}
		}
		i++;
	}
	return (digit * sign);
}
/*int main()
{
	char str[] = " ---+--+1234567";
	char ptr[] = "\t    \n---+-+1337ab567";

	printf("%i\n", ft_atoi(str));
	printf("%i\n", ft_atoi(ptr));
	
	return (0);
}*/
