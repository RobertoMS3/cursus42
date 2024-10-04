/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:28:40 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/09/29 18:48:15 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*string;
	unsigned char	unsigned_c;

	string = (unsigned char *)s;
	unsigned_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (string[i] == unsigned_c)
		{
			return ((void *)(string + i));
		}
		i++;
	}
	return (NULL);
}
