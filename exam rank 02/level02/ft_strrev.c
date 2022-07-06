#include<stdio.h>
int	ft_strlen(char *str)
{
	int y = 0;
	while(str[y] != '\0')
		y++;
	return(y);
}
char	*ft_strrev(char *str)
{
	int i = 0;
	char c;
	int len;

	len = ft_strlen(str) - 1;
	while (i < len)
	{
		c = str[i];
		str[i] = str[len];
		str[len] = c;
		i++;
		len--;
	}
	return(str);
}
/*int main()
{
	char str[] = "12345";
    printf("%s\n", str);
    printf("%s\n", ft_strrev(str));
}*/
