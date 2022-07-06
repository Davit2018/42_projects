#include<unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char c;

	if (argc == 2)
	{
		while(argv[1][i])
		{
			c = argv[1][i];
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				c = 'z' - argv[1][i] + 'a';
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				c = 'Z' - argv[1][i] + 'A';
			write(1,&c,1);
			i++;
		}
	}
	write(1,"\n",1);
}
