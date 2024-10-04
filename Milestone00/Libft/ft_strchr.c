/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:38:18 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/10/01 10:11:46 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c_find;

	c_find = (unsigned char)c;
	while (*s != '\0')
	{
		if ((unsigned char)*s == c_find)
			return ((char *)s);
		s++;
	}
	if (c_find == '\0')
		return ((char *)s);
	return (NULL);
}
