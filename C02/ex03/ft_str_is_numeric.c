#include <unistd.h>
#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int i = 0;

	if(str[i] == '\0')
	{
		return (0);
	}

	while(str[i] != '\0')
	{
		if(str[i] >= 48 && str[i] <= 57)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*int main()
{
	char arr[] = "1234567Hjl";
	char arr1[] = "1291217";

	printf("resulr1 = %d\n", ft_str_is_numeric(arr));

	printf("result2 = %d\n", ft_str_is_numeric(arr1));

	return (0);
}*/
