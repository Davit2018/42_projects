#include<unistd.h>

int ft_atoi(char *s)
{
	int i = 0;
	while(*s)
	{
		i = i * 10 + (*s-'0');
		s++;
	}
	return (i);
}
void printnumber(int x)
{
	if(x>9)
		printnumber(x/10);
	x = (x%10) + '0';
	write(1, &x,1);
}

int main(int argc, char **argv)
{
	int z = 1;
	int res = 0;
	if (argc == 2)
	{
		int	y;
		y = ft_atoi(argv[1]);
		while(z<10)
		{
			res = z * y;
			printnumber(z);
			write(1," x ",3);
			printnumber(y);
			write(1," = ",3);
			printnumber(res);
			write(1,"\n",1);
			z++;
		}
	}
	else
		write(1,"\n",1);
	return(0);
}
