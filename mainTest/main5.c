#include "../main.h"
#include <stdio.h>

int main()
{
	_printf("Can you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);
	printf("Can you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);
}
