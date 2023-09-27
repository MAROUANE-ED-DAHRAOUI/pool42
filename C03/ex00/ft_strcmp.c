#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while(s1[i] != '\0' && s2[i] != '\0')
	{
		if(s1[i] > s2[i] || s2[i] > s1[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*int main()
{
	char arr[] = "HELLOY";
	char arr1[] = "aELLAX";
	int x;

	x = ft_strcmp(arr, arr1);
	printf("%d\n", x);

	return (0);
}*/
