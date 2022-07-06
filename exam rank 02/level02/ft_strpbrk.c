#include<stdio.h>
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int d = 0;
	while(*s1 != '\0')
	{
		d = 0;
		while(s2[d] != '\0')
		{
			if (*s1 == s2[d])
				return ((char*)s1);
			d++;
		}
		s1++;
	}
	return(0);
}
/*int main()
{
	const char x[] = "abarev";
	const char y[] = "effb";
	char *f;
	f = ft_strpbrk(x,y);
	printf("%c\n",*f);
}*/
