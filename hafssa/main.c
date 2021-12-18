#include "ft_printf.h"

#include <stdio.h>

int main() {
	int r1 = printf(" %c ", '0');
	printf("\n");
	int r2 = ft_printf(" %c ", '0');
	printf("\n\n%d - %d\n", r1, r2);
}
