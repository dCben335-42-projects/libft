/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:32:44 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/15 23:47:12 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a character to the specified file descriptor.
 *
 * @param c The character to write.
 * @param fd The file descriptor to write to.
 * @return The number of bytes written, or -1 on error.
 */
int	ft_putchar_fd(const char c, const int fd)
{
	return (write(fd, &c, 1));
}
