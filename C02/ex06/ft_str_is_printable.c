#include <stdio.h>
#include <unistd.h>

int ft_str_is_printable(char *str)
{
	int i = 0;

	if(str[i] == '\0')
	{
		return(1);
	}	
	while(str[i] != '\0')
	{
		if(str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*int main()
{
	char arr[] = "AR(-:;!;,nx<fgscg";
	char arr1[] = ")123lk=lqkl,Aq!!:;,n^=";
	char arr2[] = "-;,nkjhx   lkhkuyoLlM";
	char arr3[] = "";
	printf("%d\n", ft_str_is_printable(arr));
	printf("%d\n", ft_str_is_printable(arr1));
	printf("%d\n", ft_str_is_printable(arr2));
	printf("%d\n", ft_str_is_printable(arr3));
	return (0);
}*/
