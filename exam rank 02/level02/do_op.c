#include<stdlib.h>
#include<stdio.h>

int main (int argc, char** argv)
{
	int x;
	int y;
	int z = 0;

	if(argc == 4)
	{
		x = atoi(argv[1]);
		y = atoi(argv[3]);
		if(argv[2][0] == '*')
			z = x * y;
		if(argv[2][0] == '/')
			z = x / y;
		if(argv[2][0] == '%')
			z = x % y;
		if(argv[2][0] == '+')
			z = x + y;
		if(argv[2][0] == '-')
			z = x - y;
		printf("%d",z);
	}
	printf("\n");
}
