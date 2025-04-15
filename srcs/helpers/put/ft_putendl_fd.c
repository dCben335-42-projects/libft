/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:35:22 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/15 23:52:50 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a string to the specified file descriptor, 
 * 		followed by a newline.
 *
 * @param s The string to write.
 * @param fd The file descriptor to write to.
 * @return The number of bytes written, or -1 on error.
 */
int	ft_putendl_fd(const char *s, const int fd)
{
	int	len;

	len = ft_putstr_fd(s, fd);
	if (len == -1)
		return (-1);
	if (ft_putchar_fd('\n', fd) == -1)
		return (-1);
	return (len + 1);
}
