#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int main() 
{
	char format[] = " %u ";
	int r1 = printf(format, -1);
	printf("\n");
	fflush(stdout);
	int r2 = ft_printf(format, -1);
	printf("\n");
	fflush(stdout);
	printf("%d - %d", r1, r2);
}
