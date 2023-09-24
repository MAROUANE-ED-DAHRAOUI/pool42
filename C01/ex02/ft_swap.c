#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;	
}
/*int main()
{
	int a, b;

	a = 5;
	b = 7;

	printf("a = %d\nb = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d\nb = %d\n", a, b);
	return (0);

}*/
