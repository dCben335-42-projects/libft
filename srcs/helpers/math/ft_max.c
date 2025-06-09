/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 20:57:07 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/10 00:14:31 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

/**
 * @brief Returns the maximum of two long integers.
 *
 * @param a The first long integer.
 * @param b The second long integer.
 * @return The maximum of a and b.
 */
long	ft_max(long a, long b)
{
	if (a > b)
		return (a);
	return (b);
}
