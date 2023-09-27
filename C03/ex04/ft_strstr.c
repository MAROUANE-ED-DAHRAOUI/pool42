#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{		
	int i = 0;

	if(to_find[i] == '\0')
	{
		return (str);
	}

	while(to_find[i] != '\0')
	{
		int j = 0;
		while(str[j] != '\0')
		{
			if(str[j] == to_find[i])
			{
				return (str + j);
			}	
			j++;
		}
		i++;
	} 
	return (0);
}
/*int main()
{
	char src[] = "kalilinux";
	char dest[] = "world";

	printf("%s\n", ft_strstr(src, dest));
	return (0);
}*/
