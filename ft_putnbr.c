/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcben335 <dcben335@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:00:57 by bcabocel          #+#    #+#             */
/*   Updated: 2024/11/12 00:44:19 by dcben335         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	writenbrbase(
	unsigned int nb,
	char *base,
	unsigned int base_len,
	int fd
)
{
	if (nb >= base_len)
		writenbrbase(nb / base_len, base, base_len, fd);
	write(fd, &base[nb % base_len], 1);
}

void	ft_putnbr(int nb, int fd)
{
	if (nb < 0)
		write(fd, "-", 1);
	writenbrbase((unsigned int)nb, "0123456789", 10, fd);
}
