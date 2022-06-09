/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:59:06 by dghazary          #+#    #+#             */
/*   Updated: 2022/06/05 18:47:04 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strlen(s)));
}

int	ft_print_char(int c)
{	
	return (write(1, &c, 1));
}

int	ft_print_nbr(long long int n)
{
	char	c;
	int		count;

	count = 0;
	if (n < 0)
	{
		count += 1;
		n = -n;
		write(1, "-", 1);
	}
	if ((n > 9) || (n < 0))
		count += ft_print_nbr((n / 10));
	c = (n % 10) + 48;
	count += write(1, &c, 1);
	return (count);
}

int	ft_print_hex(unsigned int a, int ind)
{
	int		count;
	char	*hex;

	count = 0;
	if (ind == 1)
	{
		hex = "0123456789ABCDEF";
		if (a > 15)
			count += ft_print_hex ((a / 16), 1);
		count += write(1, &hex[a % 16], 1);
	}
	if (ind == 2)
	{
		hex = "0123456789abcdef";
		if (a > 15)
			count += ft_print_hex ((a / 16), 2);
		count += write(1, &hex[a % 16], 1);
	}
	return (count);
}

int	ft_print_ptr(unsigned long long int a, int ind)
{
	int		count;
	char	*hex;

	hex = "0123456789abcdef";
	count = 0;
	if (ind == 1)
		count += write(1, "0x", 2);
	if (a > 15)
		count += ft_print_ptr((a / 16), 2);
	count += write(1, &hex[a % 16], 1);
	return (count);
}
