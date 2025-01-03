/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:57:48 by rmunoz-s          #+#    #+#             */
/*   Updated: 2024/11/07 10:59:45 by rmunoz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin_free(char *text, char *buffer)
{
	char	*temp;

	temp = ft_strjoin(text, buffer);
	free(text);
	return (temp);
}

char	*read_line(int fd, char *save_buffer)
{
	int		n_bytes;
	char	*buffer;

	if (!save_buffer)
		save_buffer = ft_calloc(1, 1);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	n_bytes = 1;
	while (n_bytes > 0)
	{
		n_bytes = read(fd, buffer, BUFFER_SIZE);
		if (n_bytes == -1)
		{
			free(buffer);
			free(save_buffer);
			return (NULL);
		}
		buffer[n_bytes] = '\0';
		save_buffer = ft_strjoin_free(save_buffer, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (save_buffer);
}

char	*take_first_line(char *save_buffer)
{
	int		i;
	char	*line;

	i = 0;
	if (!save_buffer)
		return (NULL);
	while (save_buffer[i] && save_buffer[i] != '\n')
		i++;
	line = malloc((i + 2) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (save_buffer[i] && save_buffer[i] != '\n')
	{
		line[i] = save_buffer[i];
		i++;
	}
	if (save_buffer[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*clean_first_line(char *save_buffer)
{
	int		i;
	int		j;
	char	*new_buffer;

	i = 0;
	while (save_buffer[i] && save_buffer[i] != '\n')
		i++;
	if (!save_buffer[i])
	{
		free(save_buffer);
		return (NULL);
	}
	new_buffer = ft_calloc((ft_strlen(save_buffer) - i + 1), sizeof(char));
	if (!new_buffer)
		return (NULL);
	i++;
	j = 0;
	while (save_buffer[i])
		new_buffer[j++] = save_buffer[i++];
	new_buffer[j] = '\0';
	free(save_buffer);
	return (new_buffer);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*save_buffer;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(save_buffer);
		save_buffer = NULL;
		return (NULL);
	}
	save_buffer = read_line(fd, save_buffer);
	if (!save_buffer)
		return (NULL);
	buffer = take_first_line(save_buffer);
	save_buffer = clean_first_line(save_buffer);
	return (buffer);
}
