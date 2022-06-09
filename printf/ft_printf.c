/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:59:22 by dghazary          #+#    #+#             */
/*   Updated: 2022/06/05 18:45:52 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	ft_checker(const char c, va_list list)
{
	int	len;

	len = 0;
	if (c == 'd' || c == 'i')
		len += ft_print_nbr(va_arg(list, int));
	else if (c == 'u')
		len += ft_print_nbr(va_arg(list, unsigned int));
	else if (c == 'c')
		len += ft_print_char(va_arg(list, int));
	else if (c == '%')
		len += ft_print_char('%');
	else if (c == 's')
		len += ft_print_str(va_arg(list, char *));
	else if (c == 'X')
		len += ft_print_hex(va_arg(list, unsigned int), 1);
	else if (c == 'x')
		len += ft_print_hex(va_arg(list, unsigned int), 2);
	else if (c == 'p')
		len += ft_print_ptr(va_arg(list, unsigned long long int), 1);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		n;
	int		i;
	int		len;

	len = 0;
	n = 0;
	i = 0;
	va_start(list, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len += ft_checker(str[i + 1], list);
			i++;
		}
		else
			len += ft_print_char(str[i]);
		i++;
	}
	va_end(list);
	return (len);
}
