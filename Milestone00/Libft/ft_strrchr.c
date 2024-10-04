/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:43:40 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/10/04 10:09:57 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*str;
	char		find_c;
	size_t		i;

	str = (char *)s;
	find_c = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (str[i] == find_c)
			return (str + i);
		i--;
	}
	if (str[0] == find_c)
		return (str);
	return (NULL);
}
