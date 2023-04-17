#include "main.h"

int main(void)
{
	const char* path = __FILE__;
	int i = 0;

	while (path[i])
	{
		_putchar(path[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
