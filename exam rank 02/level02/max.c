#include<stdio.h>

int	max(int *tab, unsigned int len)
{
	int i = 0;

	if(len == 0)
		return(0);
	i = tab[len-1];
	while (len--)
	{
		if(tab[len]  > i)
			i = tab[len];
	}
	return(i);
}
/*int main()
{
	int tab[]={44,5,-6,11,-58,3,9};
	int x;
	x = max(tab, 7);
	printf("%d\n",x);
}*/
