/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:50:43 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 20:28:03 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculates the length of an integer in a given base.
 *
 * @param n The integer to calculate the length of.
 * @param base_len The length of the base.
 * @return The length of the integer in the given base.
 */
int	ft_intlen_base(int n, size_t base_len)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= base_len;
	}
	return (len);
}
