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
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i = 0;
	int k = 0;
	int lend = strlen(dest);
	int lens = strlen(src);

	k = lend;

	if(size == 0)
	{
		return (lens + size);	
	}
	
	while(src[i] != '\0' && i < size - 1)
	{
		dest[k] = src[i];
		k++;
		i++;
	}

	dest[k] = '\0';

	return (lend + lens);
}
/*int main()
{
	char src[] = "World 1337 greated";
	char dest[] = "Hello";
	
	printf("%d\n", ft_strlcat(dest, src, 20));
	printf("%s\n", dest);

	return (0);
}*/
