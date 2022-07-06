#include<stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	int d = 0;

	while(accept[d] != '\0')
	{
		while(s[i] == accept[d])
		{
			i++;
			d++;	
		}
		d++;
	}
	return(i);
}
/*int main () {
   int len;
   const char str1[] = "ABCDEFG019874";
   const char str2[] = "";

   len = ft_strspn(str1, str2);

   printf("%d\n", len );

}*/
