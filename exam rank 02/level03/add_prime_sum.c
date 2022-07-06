#include<unistd.h>

int ft_atoi(char *str)
{
	int n = 0;

	while(*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return(n);
}

void ft_putnbr(int a)
{
	char c;
	if(a > 9)
		ft_putnbr(a/10);
	c = (a % 10) + '0';
	write(1,&c,1);
}

int checker (int d)
{
	int i = 2;
	while(i<d)
	{
		if(d % i == 0)
			return(0);
		i++;
	}
	return(1);
}
int main(int argc, char **argv)
{
	int j;
	int s = 2;
	int g = 0;
	j = ft_atoi(argv[1]);
	if (argc == 2 && j > 0)
	{
		while(s <= j)
		{
			if (checker(s) == 1)
				g += s;
			s++;
		}
	    ft_putnbr(g);
	}
	else
		write(1,"0",1);
	write (1,"\n",1);
	return(0);
}
