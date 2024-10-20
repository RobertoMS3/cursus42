/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 08:59:34 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/10/16 12:03:38 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printer(va_list args, const char type)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (type == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (type == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (type == 'd')
		count += ft_putnbr(va_arg(args, int));
	else if (type == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		count += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (type == 'x')
		count += ft_putnbr_hex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (type == 'X')
		count += ft_putnbr_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (type == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i] != 0)
	{
		if (format[i] != '%')
		{
			count += ft_putchar(format[i]);
		}
		else
		{
			count += printer(args, format[i + 1]);
			i++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
