#include <stdio.h>
#include <stdlib.h>

int strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char *ft_strdup(char *src)
{
	char *ptr;
	int len = strlen(src);
	int i = 0;
	
	ptr = malloc(len * sizeof(char) + 1);
	
	if(!ptr)
	{
		return (0);
	}

	while(src[i] != '\0')
        {
                ptr[i] = src[i];
                i++;
        }
	ptr[i] = '\0';

        return (ptr);
}
/*int main()
{
	char arr[] = "Hello world!";
	char arr1[] = "next with malloc?";

	printf("%s\n", ft_strdup(arr));
	printf("%s\n", ft_strdup(arr1));
	
	return (0);
}*/
