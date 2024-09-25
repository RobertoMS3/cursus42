/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:48:21 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/09/25 16:59:47 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*substr;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	if (start < s_len)
		i = s_len - start;
	if (i > len)
		i = len;
	substr = (char *)malloc((i + 1) * sizeof(char));
	if (substr == NULL)
		return (0);
	ft_strlcpy(substr, s + start, i + 1);
	return (substr);
}
