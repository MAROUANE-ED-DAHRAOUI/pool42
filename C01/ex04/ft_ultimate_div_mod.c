#include <stdio.h>
#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int div, mod;

		div = *a / *b;
		mod = *a % *b;

		*a = div;
		*b = mod;
}
/*int main()
{
	int a = 1015;
	int b = 100;

	ft_ultimate_div_mod(&a, &b);
	
	printf("a = %d\nb = %d\n", a, b);

	return (0);
}*/
