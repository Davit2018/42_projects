#include <unistd.h>

void capitalizer (char *str)
{
	int d = 1;		
	if(str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	write(1,&str[0],1);

	while (str[d] != '\0')
	{
		if((str[d-1] == ' ' || str[d-1] == '\t') && str[d] >= 'a' && str[d] <='z')
			str[d] = str[d] - 32;
		else if(str[d] >= 'A' && str[d] <= 'Z')
			str[d] = str[d] + 32;
		write(1,&str[d],1);
		d++;
	}
	write(1,"\n",1);
}

int main(int argc, char **argv)
{
	int i = 1;
	if(argc == 1)
		write(1,"\n",1);
	else
	{
		while(i<argc)
		{
			capitalizer(argv[i]);
			i++;			
		}
	}
}
