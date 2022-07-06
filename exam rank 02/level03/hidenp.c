#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int d = 0;

		while(argv[2][d] != '\0')
		{
			if(argv[1][i] == argv[2][d])
				i++;
			if(argv[1][i] == '\0')
			{
				write(1,"1\n",2);
				return(0);
			}	
			d++;
		}
		write(1,"0\n",2);
	}
	else
		write(1,"\n",1);
	return(0);
}
