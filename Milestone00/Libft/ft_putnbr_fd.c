/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:28:20 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/09/29 12:39:52 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	nb_char;

	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * -1;
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	nb_char = nb % 10 + '0';
	write (fd, &nb_char, 1);
}
