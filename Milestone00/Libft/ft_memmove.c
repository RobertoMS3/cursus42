/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:03:43 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/09/25 18:00:20 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
    unsigned char	*d;
    const unsigned char	*s;
	size_t	i;
	
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (s == NULL || d == NULL)
		return (NULL);
		if (d > s)
    {
    	i = len;
    	while (i > 0)
    	{
        	i--;
        	d[i] = s[i];
    	}
    }
	else if (d < s)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
