/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:52:48 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/09/29 12:40:02 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		i;
	int		j;

	new_string = (char *)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new_string == 0)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		new_string[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_string[i] = s2[j];
		i++;
		j++;
	}
	new_string[i] = '\0';
	return (new_string);
}
