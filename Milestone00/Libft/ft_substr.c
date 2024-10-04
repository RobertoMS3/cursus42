/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:48:21 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/10/01 15:05:42 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	str_len;

	if (!s)
		return (0);
	str_len = ft_strlen(s);
	if (str_len < start)
		return (ft_strdup(""));
	else if (len > str_len - start)
		len = str_len - start;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
