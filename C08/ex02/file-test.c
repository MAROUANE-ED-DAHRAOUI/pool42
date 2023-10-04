#include <stdio.h>
#include "ft_abs.h"

int main(void)
{
	int num;
	
	num = -10;
	while (num < 10)
	{
		printf("abs(%d) = %d\n", num, ABS(num));
		num++;
	}
	return (0);
}
