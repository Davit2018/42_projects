#include<stdio.h>
int	ft_atoi(const char *str)
{
	int result = 0;
	int sign = 1;
	int digit;
    
    while (*str == ' ')
        str++;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
    
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10;
		digit = *str - '0';
		result = result + digit;
		++str;
	}
	
	return (result * sign);
}
int main()
{
    printf("%d", ft_atoi("  2147483647"));    
}
