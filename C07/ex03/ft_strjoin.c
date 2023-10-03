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

char *strcpy(char *dest, char *src)
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

int full_lenght(int size, char **str, int sep)
{
	int index;
	int sumleng;

	index = 0;
	sumleng = 0;
	while(index < size)
	{
		sumleng += strlen(str[index]);
		sumleng += sep;
		index++; 
	}
	sumleng -= sep;
	return (sumleng);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int index;
	int len = 0;
	char *str;
	char *d;
	
	if(size == 0)
		return ((char *)malloc(sizeof(char)));
	
	len = full_lenght(size, strs, strlen(sep));
	d = (str = (char *)malloc((len + 1) * sizeof(char)));

	if(!d)
	{
		return (0);
	}

	index = 0;
	while(index < size)
	{
		strcpy(d ,strs[index]);
		d += strlen(strs[index]);

		if(index < size - 1)
		{
			strcpy(d, sep);
			d += strlen(sep);
		}
		index++;
	}
	*d = '\0';
	
	return (str);

}
/*int main()
{
	char **arr;
	char *ptr;
	char *sep;
	int size = 3;

	arr = ((char**)malloc(size * sizeof(char *)));
	arr[0] = malloc(sizeof(char *) * 5 + 1);
	arr[1] = malloc(sizeof(char *) * 5 + 1);
	arr[2] = malloc(sizeof(char *) * 13 + 1);
	arr[0] = "Hello";
	arr[1] = "world";
	arr[2] = "!this is good";

	sep = " ";
	ptr = ft_strjoin(size, arr, sep);

	printf("%s", ptr);
	printf("\n");
	return (0);
}*/
