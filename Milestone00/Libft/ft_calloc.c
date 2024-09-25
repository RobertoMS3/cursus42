/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 10:18:16 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/09/25 17:02:33 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	size_t			total_size;
	size_t			i;
	unsigned char	*temp;

	i = 0;
	total_size = count * size;
	ptr = malloc(total_size);
	temp = (unsigned char *)ptr;
	while (i < total_size)
	{
		temp[i] = 0;
		i++;
	}
	return (ptr);
}
