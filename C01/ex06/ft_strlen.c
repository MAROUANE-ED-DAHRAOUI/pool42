#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	if(str[i] != '\0')
	{
		while(str[i] != '\0')
		{
			i++;
		}
		return (i);
	}
	return(0);
}
/*int main()
{
	char *p = "Hello Next!";
	int nm;
	
	nm = ft_strlen(p);
	printf("%d\n", nm);

	return (0);
}*/
