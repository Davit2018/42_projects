#include<unistd.h>
int checker(char *str, char c, int position)
{
	int g = 0;
	while(g < position)
	{
		if (str[g] == c)
			return(0);
		g++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i = 0;
	int d = 0;

	if (argc == 3)
	{
		while(argv[1][i] != '\0')
		{
			d = 0;
			while(argv[2][d] != '\0')
			{
				if(argv[1][i] == argv[2][d])
				{
					if(checker(argv[1], argv[1][i], i))
					{
						write(1,&argv[1][i],1);
						break;
					}
				}
				d++;
			}
			i++;
		}
	}
	write(1,"\n",1);
	return(0);
}
