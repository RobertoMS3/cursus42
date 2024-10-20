/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:14:22 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/10/16 12:03:40 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i] != 0)
	{
		ft_putchar(str[i++]);
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	char	nb_char;
	int		count;

	count = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	nb_char = nb % 10 + '0';
	count += ft_putchar(nb_char);
	return (count);
}

int	ft_putnbr_unsigned(unsigned int nb)
{
	int		count;
	char	nb_char;

	count = 0;
	if (nb > 9)
		count += ft_putnbr_unsigned(nb / 10);
	nb_char = nb % 10 + '0';
	count += ft_putchar(nb_char);
	return (count);
}

int	ft_putnbr_hex(unsigned long nb, const char *base)
{
	int		count;

	count = 0;
	if (nb > 15)
		count += ft_putnbr_hex(nb / 16, base);
	count += ft_putchar(base[nb % 16]);
	return (count);
}
