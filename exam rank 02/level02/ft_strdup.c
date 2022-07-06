#include<stdio.h>
#include<stdlib.h>
int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
char	*ft_strdup(char *src)
{
	int y = 0;
	char *new;

	new = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if(!new)
		return(0);
	while (src[y] != '\0')
	{
		new[y] = src[y];
		y++;
	}
	new[y] = '\0';
	return(new);
}

/*int main()
{
	char d[] = "Barev";
	char *x;

	x = ft_strdup(d);
	printf("%s\n", x);
}*/
