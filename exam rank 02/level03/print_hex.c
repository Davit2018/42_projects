#include<unistd.h>

void ft_putnbr(int d)
{
	int j;
	char tab[] = "0123456789abcdef";
	if(d > 15)
		ft_putnbr(d/16);
	j = (d % 16);
	write(1,&tab[j],1);
}

int ft_atoi(char *str)
{
	int res = 0;
	while(*str >= '0' && *str <= '9') 
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res);

}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int x = ft_atoi(argv[1]);
		ft_putnbr(x);
	}
	write(1,"\n",1);
}
