/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:58:57 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 20:21:06 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two strings lexicographically,
 * 		ignoring case, up to n characters.
 *
 * @param a The first string to compare.
 * @param b The second string to compare.
 * @param n The maximum number of characters to compare.
 * @return A negative value if a is less than b, a positive value if a is
 *         greater than b, and 0 if they are equal.
 */
int	ft_strncasecmp(const char *a, const char *b, size_t n)
{
	int	ca;
	int	cb;

	while (n && (*a || *b))
	{
		ca = ft_tolower(*a);
		cb = ft_tolower(*b);
		if (ca != cb)
			return (ca - cb);
		a++;
		b++;
		n--;
	}
	return (0);
}
