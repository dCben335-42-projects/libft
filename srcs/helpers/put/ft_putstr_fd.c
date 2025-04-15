/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:34:34 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/15 23:47:54 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a string to the specified file descriptor.
 *
 * @param s The string to write.
 * @param fd The file descriptor to write to.
 * @return The number of bytes written, or -1 on error.
 */
int	ft_putstr_fd(const char *s, const int fd)
{
	return (write(fd, s, ft_strlen(s)));
}
