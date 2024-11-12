/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcben335 <dcben335@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 04:12:30 by dcben335          #+#    #+#             */
/*   Updated: 2024/11/12 04:44:36 by dcben335         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	char			*str;
	int				len;
	int				is_neg;

	len = ft_intlen(n);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	is_neg = 0;
	nb = (unsigned int) n;
	if (n < 0)
	{
		str[0] = '-';
		is_neg = 1;
		nb = (unsigned int) -n;
	}
	while (--len >= is_neg)
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
