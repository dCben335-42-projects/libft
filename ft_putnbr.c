/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:00:57 by bcabocel          #+#    #+#             */
/*   Updated: 2024/11/06 15:33:41 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	writenbrbase(unsigned int nb, char *base, unsigned baselen, int fd)
{
	if (nb >= baselen)
		 writenbrbase(nb / baselen, base, baselen, fd);
	write(fd, &base[nb % baselen], 1);
}

void	ft_putnbr(int nb, int fd)
{
	if (nb < 0)
		write(fd, "-", 1);
	writenbrbase((unsigned int)nb, "0123456789", 10, fd);
}

// int	main(void)
// {
// 	ft_putnbr(-2147483648, 1);
// }
