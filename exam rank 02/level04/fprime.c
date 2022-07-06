#include<stdio.h>
#include<stdlib.h>

int checker(int x)
{
	int n = 2;
	while(n < x)
	{
		if((n % x) == 0)
			return(0);
		n++;
	}
	return(1);
}

int main (int argc, char **argv)
{
	if(argc == 2)
	{
		int i;
		int ind = 1;
		int fact = 2;
		i = atoi(argv[1]);
		if (i  == 1)
			printf("1");
		while(fact <= i)
		{
			if(i % fact == 0 && checker(fact))
			{
				if(ind == 1)
					printf("%d", fact);
				else 
					printf("*%d", fact);
				ind = 0;
				i = i / fact;
			}
			else 
				++fact;
		}	
	}
	printf("\n");
}
