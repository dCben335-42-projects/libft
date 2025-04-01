/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fnmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:06:27 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 20:20:16 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * @brief Matches a string against a pattern with wildcard support.
 *        The pattern can contain '*' which matches any sequence of characters.
 *
 * @param pattern The pattern to match against.
 * @param str The string to match.
 * @return TRUE if the string matches the pattern, FALSE otherwise.
 */
t_bool	ft_fnmatch(const char *pattern, const char *str)
{
	if (*pattern == '\0')
		return (*str == '\0');
	if (*pattern == '*')
	{
		while (*str)
		{
			if (ft_fnmatch(pattern + 1, str))
				return (TRUE);
			str++;
		}
		return (ft_fnmatch(pattern + 1, str));
	}
	if (*pattern == *str)
		return (ft_fnmatch(pattern + 1, str + 1));
	return (FALSE);
}
