/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:03:43 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/10/04 09:44:18 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	unsigned const char	*p_src;

	if (dest < src)
		return (ft_memcpy(dest, src, n));
	p_dest = (unsigned char *)dest;
	p_src = (unsigned const char *)src;
	if (!n || dest == src)
		return (dest);
	while (n--)
		p_dest[n] = p_src[n];
	return (dest);
}
