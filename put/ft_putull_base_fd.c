/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putull_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 22:45:00 by bcabocel          #+#    #+#             */
/*   Updated: 2025/01/13 18:27:24 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putull_base_fd(size_t nb, char *base, size_t base_len, int fd)
{
	int	len;

	len = 0;
	if (nb >= base_len)
		len += ft_putull_base_fd(nb / base_len, base, base_len, fd);
	if (ft_putchar_fd(base[nb % base_len], fd) == -1)
		return (-1);
	return (len + 1);
}
