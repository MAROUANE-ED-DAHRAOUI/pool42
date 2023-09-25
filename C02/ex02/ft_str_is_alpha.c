#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z' ||
			str[i] >= 'a' && str[i] <= 'z')
		{
			if(str[i + 1] == '\0')
			{
				return (1);
			}
			i++;
		}
		else
		{
			return (0);
		}
	}
}
/*int main()
{
	char str[] =  "helloone";
	int res;
	char sex[] = "Nice2ex";

	res = ft_str_is_alpha(str);
	printf("%d\n", res);

	res = ft_str_is_alpha(sex);
	printf("%d\n", res);

	return (0);
}*/
