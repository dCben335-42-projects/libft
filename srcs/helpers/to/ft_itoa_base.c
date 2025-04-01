/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 04:12:30 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 19:35:03 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts an integer to a string in a given base.
 *
 * @param n The integer to convert.
 * @param base The base to convert to (e.g., "0123456789ABCDEF" for hexadecimal).
 * @return A pointer to the resulting string. NULL if memory allocation fails.
 */
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
