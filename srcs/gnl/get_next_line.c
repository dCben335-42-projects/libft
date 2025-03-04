/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 01:06:27 by bcabocel          #+#    #+#             */
/*   Updated: 2025/01/13 19:44:56 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	*handle_free(char **ptr)
{
	if (*ptr)
	{
		free(*ptr);
		*ptr = NULL;
	}
	return (NULL);
}

static char	*handle_line_from_rest(char **rest)
{
	char	*line;
	char	*tmp;
	char	*l_jump;

	line = NULL;
	tmp = NULL;
	l_jump = ft_strchr(*rest, '\n');
	if (!l_jump)
	{
		if (**rest)
			line = ft_strdup(*rest);
		handle_free(rest);
		return (line);
	}
	line = ft_substr(*rest, 0, l_jump - *rest + 1);
	if (!line)
		return (handle_free(rest));
	tmp = ft_strdup(l_jump + 1);
	handle_free(rest);
	if (!tmp)
		handle_free(&line);
	*rest = tmp;
	return (line);
}

static char	*handle_rest_from_buffer(char **rest, char *buffer)
{
	char	*tmp;

	tmp = ft_strjoin(*rest, buffer);
	handle_free(rest);
	if (!tmp)
		return (NULL);
	*rest = tmp;
	return (*rest);
}

char	*get_next_line(int fd)
{
	static char	*rest[OPEN_MAX];
	char		buffer[BUFFER_SIZE + 1];
	int			bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!rest[fd])
		rest[fd] = ft_strdup("");
	if (!rest[fd])
		return (NULL);
	while (!ft_strchr(rest[fd], '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (handle_free(&rest[fd]));
		if (bytes_read <= 0)
			break ;
		buffer[bytes_read] = '\0';
		if (!handle_rest_from_buffer(&rest[fd], buffer))
			return (NULL);
	}
	return (handle_line_from_rest(&rest[fd]));
}
