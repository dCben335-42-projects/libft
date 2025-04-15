/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:43:52 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/15 16:21:20 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Compares two strings lexicographically.
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @return A negative value if s1 is less than s2, a positive value if s1 is
 *         greater than s2, and 0 if they are equal.
 */
int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}
