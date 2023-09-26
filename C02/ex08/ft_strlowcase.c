#include <unistd.h>
#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*int main()
{
	char arr[] = "HELLO BRO!";
	char arr1[] = "nexT STEP!!";

	printf("%s\n", ft_strlowcase(arr));
	printf("%s\n", ft_strlowcase(arr1));
		
	return (0);
}*/
