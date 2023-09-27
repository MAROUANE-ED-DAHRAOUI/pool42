#include <stdio.h>
#include <unistd.h>

int strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char *ft_strcat(char *dest, char *src)
{
	int i = 0;
	int len = strlen(dest);
	
	while(src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';

	return (dest);
}
int main()
{
	char arr[] = "Hello";
	char arr1[] = " World!";

	printf("%s\n", ft_strcat(arr, arr1));
	printf("%s\n", arr);

	return (0);
}
