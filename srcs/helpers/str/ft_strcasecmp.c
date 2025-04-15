/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:56:38 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/15 16:21:41 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two strings lexicographically, ignoring case.
 *
 * @param a The first string to compare.
 * @param b The second string to compare.
 * @return A negative value if a is less than b, a positive value if a is
 *         greater than b, and 0 if they are equal.
 */
int	ft_strcasecmp(const char *a, const char *b)
{
	int	ca;
	int	cb;

	while (*a || *b)
	{
		ca = ft_tolower(*a);
		cb = ft_tolower(*b);
		if (ca != cb)
			return (ca - cb);
		a++;
		b++;
	}
	return (0);
}
