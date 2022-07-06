#include<stdio.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int d = 0;

	while (s[i] != '\0')
	{
		d = 0;
		while(reject[d] != '\0')
		{
			if (s[i] == reject[d])
				return(i);
			d++;
		}
		i++;
	}
	return(i);
}
/*int main()
{
	int x;
	const char gg[] = " barev";
	const char ff[] = "";
	x = ft_strcspn(gg,ff);
	printf("%d\n", x);

}*/
