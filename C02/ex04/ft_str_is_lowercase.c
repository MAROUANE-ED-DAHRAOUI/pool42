#include <unistd.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int i = 0;

	if(str[i] == '\0')
	{
		return (0);
	}
	
	while(str[i] != '\0')
	{
		if(str[i] >= 97 && str[i] <= 122)
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
	char arr[] = "abcdfer5JHG";
	char arr1[] = "arezreytuyuyiui";
	char arr2[] = "jhgjhgkjAghj";

	printf("result1 = %d\n", ft_str_is_lowercase(arr));
	printf("result2 = %d\n", ft_str_is_lowercase(arr1));
	printf("result3 = %d\n", ft_str_is_lowercase(arr2));

	return (0);
}*/
