#include<unistd.h>

void checker(char *a, char *b)
{
	int i = 0;
	while(a[i] != '\0')
	{
		while(a[i] != *b && *b != '\0')
			b++;
		if(*b == '\0')
			return;
		i++;
		b++;
	}
	write(1, a, i);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		checker(argv[1],argv[2]);
	write(1,"\n",1);
	return(0);
}
