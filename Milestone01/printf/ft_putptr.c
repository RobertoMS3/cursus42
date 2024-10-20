/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:04:36 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/10/16 12:03:43 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	temp;

	if (!ptr)
		return (ft_putstr("(nil)"));
	count = ft_putstr("0x");
	temp = (unsigned long)ptr;
	count += ft_putnbr_hex(temp, "0123456789abcdef");
	return (count);
}
