#include <stdio.h>
#include <unistd.h>
int  strlen(char *src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		i++;
	}
	return (i);
}
size_t ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i = 0;
	int j;

	j = strlen(src);

	while(src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	
	return (j);
}
/*int main()
{
	char arr[] = "Hello";
	char arr1[] = "World";

	printf("lenght = %d\n%s\n", ft_strlcpy(arr, arr1, 8), arr);

	return (0);
}*/
