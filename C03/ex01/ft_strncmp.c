
#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i = 0;

	while(i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if(s1[i] > s2[i])
		{
			return (1);
		}
		else if(s2[i] > s1[i])
		{
			return (-1);
		}

		i++;
	}
	return (0);
}
/*int main()
{
	char arr[] = "HELLO WArld!";
	char arr1[] = "HELLO Wtrld";
	int x;

	x = ft_strncmp(arr, arr1, 9);
		
	printf("%d\n", x);
	return (0);
}*/
