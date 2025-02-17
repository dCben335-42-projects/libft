/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:00:57 by bcabocel          #+#    #+#             */
/*   Updated: 2025/02/17 03:56:54 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base_fd(int nb, char *base, int fd)
{
	unsigned int	nbr;
	size_t			base_len;
	t_bool			is_neg;
	int				len;

	base_len = ft_strlen(base);
	is_neg = FALSE;
	nbr = nb;
	if (nb < 0)
	{
		if (ft_putchar_fd('-', fd) == -1)
			return (-1);
		nbr = -nb;
		is_neg = TRUE;
	}
	len = (ft_putull_base_fd(nbr, base, base_len, fd));
	if (len == -1)
		return (-1);
	return (len + is_neg);
}
