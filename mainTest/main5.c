#include "../main.h"
#include <stdio.h>

int main()
{
	_printf("%r", "\nThis sentence is retrieved from va_args!\n");
	_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");
}
