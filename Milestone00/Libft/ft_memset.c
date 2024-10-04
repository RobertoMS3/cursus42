/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:59:46 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/09/29 12:39:48 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*t;
	size_t	i;

	i = 0;
	t = (char *)s;
	while (n > i)
	{
		t[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
