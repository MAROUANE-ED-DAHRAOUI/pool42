#include <stdio.h>
#include <stdlib.h>
#include "strs_to_tab.h"

int ft_str_len(char *str)
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
	int index = 0;
	char *dest;
	char *A;
	
	A = (dest = (char *)malloc(sizeof(src) * ft_str_len(src)));

	if(!A)
	{
		return (0);
	}
	
	while(index < ft_str_len(src))
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int index;
	struct s_stock_str *arr;
	struct s_stock_str *A;

	A = (arr = malloc(sizeof(struct s_stock_str) * (ac + 1)));

	if(!A)
	{
		return (NULL);
	}
	index = 0;
	while(index < ac)
	{
		arr[index].size = ft_str_len(av[index]);
		arr[index].str = av[index];
		arr[index].copy = ft_strdup(av[index]);

		index++;
	}
	arr[index].str = 0;
	arr[index].copy = 0;
	
	return (arr);
}
/*int main(int argc, char *argv[])
{
	int index ;
	struct s_stock_str *pointer;
	
	
	pointer = ft_strs_to_tab(argc, argv);
	
	index = 0;
	while(index < argc)
	{
		printf("original: %s\n", pointer[index].str);
		printf("copie: %s\n", pointer[index].copy);
		printf("size: %d\n", pointer[index].size);
		index++;
	}
	return (0);
	
}*/
