#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;	
	}
	return (i);
}
int full_lenght(int size, char **str, char sepr)
{
	int index = 0;
	int len = 0;

	if(size == 0)
	{
		return (0);
	}

	while(index < size)
	{
		len += ft_strlen(str[index]);
		len += sepr;

		index++;
	}

	len -= sepr;
	return (len);
}
char *ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
char *ft_strjoin(int size, char **strs, char *sep)
{
	int len;
	int index = 0;
	char *ptr;
	char *d;
	
	len = 0;
	
	len = full_lenght(size, strs, ft_strlen(sep));
	d = (ptr = (char *)malloc(sizeof(char *) * len));
	
	if(size == 0)
               return (malloc(sizeof(char)));

	while(index < size)
	{
		ft_strcpy(d, strs[index]);
		d += ft_strlen(strs[index]);
	
		if(index < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_strlen(sep);
		}
		index++;
	}
	d = '\0';

	return (ptr);
}
/*int main()
{
	char **arr;
	char *ptr;
	char *sepr;
	int size = 4;
	
	arr = malloc(sizeof(char*) * size);
	arr[0] = malloc(sizeof(char *) * 5 + 1);
	arr[1] = malloc(sizeof(char *) * 5 + 1);
	arr[2] = malloc(sizeof(char *) * 4 + 1);
	arr[3] = malloc(sizeof(char *) * 10 + 1);
	
	arr[0] = "Hello";
	arr[1] = "World";
	arr[2] = "Iam";
	arr[3] = "in next st";

	sepr = " ";

	ptr = ft_strjoin(size, arr, sepr);
	printf("%s\n", ptr);
	
	return (0);
}*/
