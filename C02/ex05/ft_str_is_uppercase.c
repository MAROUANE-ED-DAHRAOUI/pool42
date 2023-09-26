#include <unistd.h>
#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	int i = 0;

	if(str[i] == '\0')
	{
		return (0);
	}
	while(str[i] != '\0')
	{
		if(str[i] >= 65 && str[i] <= 90)
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
	char arr[] = "ABBVGGZJNSQUHJ";
	char arr1[] = "AYUTUH5gf";
	char arr2[] = "AGFHGVVDSZDS";
	char arr3[] = "HGFJHF6(retr4";

	printf("res1 = %d\n", ft_str_is_uppercase(arr));
	printf("res2 = %d\n", ft_str_is_uppercase(arr1));
	printf("res3 = %d\n", ft_str_is_uppercase(arr2));
	printf("res4 = %d\n", ft_str_is_uppercase(arr3));

	return (0);
}*/
