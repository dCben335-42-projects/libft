/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 04:12:30 by bcabocel          #+#    #+#             */
/*   Updated: 2024/11/21 22:23:06 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int n, char *base)
{
	unsigned int	nb;
	char			*str;
	int				len;
	int				base_len;

	base_len = ft_strlen(base);
	len = ft_intlen_base(n, base_len);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	nb = (unsigned int) n;
	if (n < 0)
		nb = (unsigned int) -n;
	while (--len >= 0)
	{
		str[len] = base[nb % base_len];
		nb /= base_len;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
