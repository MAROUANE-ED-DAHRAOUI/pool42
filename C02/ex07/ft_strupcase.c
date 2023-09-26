#include <unistd.h>
#include <stdio.h>

char *ft_strupcase(char *str)
{
	int i = 0;
	
	if(str[i] == '\0')
	{
		return (str);
	}
	while(str[i] != '\0')
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}

		i++;		
	}
	return (str);
}
/*int main()
{
	char arr[] = "Hello brother!";
	char arr1[] = "MAROUANE dh";

	printf("%s\n", ft_strupcase(arr));
	printf("%s\n", ft_strupcase(arr1));
	
	return (0);
}*/
