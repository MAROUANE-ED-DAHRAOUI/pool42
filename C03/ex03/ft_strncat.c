#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i = 0;
	int len = ft_strlen(dest);
	
	while(i < nb && src[i] != '\0')
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
	char src[] = "hello med";
	char dest[] = "1337 ";

	printf("%s\n", ft_strncat(dest, src, 4));
	printf("%s\n", dest);

	return (0);
}
