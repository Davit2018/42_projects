#include <unistd.h>
#include <stdio.h>

int ft_lcm (unsigned int x, unsigned int y)
{
	int i = 1;
	
	if(x == 0 || y == 0)
		return(0);	
	while(i)
	{
		if((i % x == 0) && (i % y == 0))
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int main()
{
	int g;
	g = ft_lcm(1568,2498);
	printf("%d", g);
}
