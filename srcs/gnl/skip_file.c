/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 06:37:21 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 19:54:53 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * @brief Skips the rest of the file until EOF. 
 *		It is useful to free the remaining memory 
 		allocated by the get_next_line function.
 *
 * @param fd The file descriptor to skip.
 * @return NULL.
 */
void	*skip_file_gnl(int fd)
{
	char	*line;

	line = get_next_line(fd);
	while (line)
	{
		free(line);
		line = get_next_line(fd);
	}
	if (fd > 0)
		close(fd);
	return (NULL);
}
