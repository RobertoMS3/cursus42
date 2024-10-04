/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:58:04 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/09/30 14:10:58 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long num)
{
	int	len;

	len = 0;
	if (num < 0)
	{
		len ++;
		num = -num;
	}
	if (num == 0)
		len = 1;
	while (num != 0)
	{
		num = num / 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int num)
{
	char	*temp;
	int		len;
	long	n;

	n = num;
	len = get_len(n);
	temp = (char *)malloc((len + 1) * sizeof(char));
	if (temp == 0)
		return (NULL);
	temp[len] = '\0';
	if (n == 0)
		temp[0] = '0';
	if (n < 0)
	{
		temp[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		temp[--len] = n % 10 + '0';
		n = n / 10;
	}
	return (temp);
}
