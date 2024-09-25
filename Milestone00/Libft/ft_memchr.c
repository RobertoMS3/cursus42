/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:28:40 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/09/25 17:37:06 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*string;

	string = (const unsigned char *)s;
	i = 0;
	while (n > i)
	{
		if (string[i] == c)
		{
			return ((void *)(string + i));
		}
		i++;
	}
	return (NULL);
}
