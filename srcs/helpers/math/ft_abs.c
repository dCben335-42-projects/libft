/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 20:55:10 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 19:41:42 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math_utils.h"

/**
 * @brief Returns the absolute value of a long long integer.
 *
 * @param n The long long integer to check.
 * @return The absolute value of n.
 */
unsigned long long	ft_abs(long long n)
{
	if (n < 0)
		return (-n);
	return (n);
}
