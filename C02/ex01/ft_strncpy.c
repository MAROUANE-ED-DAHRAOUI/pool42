#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

/*int main()
{
	char arr[] = "Hello brother!";
	char arr1[] = "nicetome";
	char *res;

	res = ft_strncpy(arr1, arr, 5);

	while(*res)
	{
		printf("%c", *res);
		res++;
	}
	printf("\n");

	return (0);

	
}*/
