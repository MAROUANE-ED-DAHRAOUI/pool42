#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i = 0;

	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main()
{
	char arr[] = "hello world!";
	char arr2[12];
	char *ch;

	ch = ft_strcpy(arr2, arr);
	
	while(*ch)
	{
		printf("%c", *ch);
		ch++;
	}
	printf("\n");
	return (0);
}*/
