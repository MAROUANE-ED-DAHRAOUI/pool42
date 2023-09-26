#include <unistd.h>
#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int i = 0;
	int j = 1;

	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			if(j == 1)
			{
			      str[i] -= 32;	
			}		
			j = 0;
		}
		else if(str[i] >= '0' && str[i] <= '9')
		{
			j = 0;
		}
		else
		{
			j = 1;
		}

		i++;
	}
	return (str);
}
int main()
{
	char arr[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(arr));

	return (0);
}
