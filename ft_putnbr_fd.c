/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcben335 <dcben335@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:00:57 by bcabocel          #+#    #+#             */
/*   Updated: 2024/11/13 20:52:00 by dcben335         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	write_nbr_base(
	unsigned int nb,
	char *base,
	unsigned int base_len,
	int fd
)
{
	if (nb >= base_len)
		write_nbr_base(nb / base_len, base, base_len, fd);
	ft_putchar_fd(base[nb % base_len], fd);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	write_nbr_base((unsigned int)nb, "0123456789", 10, fd);
}
