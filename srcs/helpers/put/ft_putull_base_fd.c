/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putull_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 22:45:00 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/15 23:53:18 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes an unsigned long long integer
 * 		in a specified base to a file descriptor.
 *
 * @param nb The unsigned long long integer to write.
 * @param base The base to use for conversion 
 * 		(e.g., "0123456789ABCDEF" for hexadecimal).
 * @param base_len The length of the base.
 * @param fd The file descriptor to write to.
 * @return The number of bytes written, or -1 on error.
 */
int	ft_putull_base_fd(
	const size_t nb,
	const char *base,
	const size_t base_len,
	const int fd)
{
	int	len;

	len = 0;
	if (nb >= base_len)
		len += ft_putull_base_fd(nb / base_len, base, base_len, fd);
	if (ft_putchar_fd(base[nb % base_len], fd) == -1)
		return (-1);
	return (len + 1);
}
