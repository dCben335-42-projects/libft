/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fnmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:06:27 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/11 20:49:45 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Matches a string against a pattern with wildcard support.
 *        The pattern can contain '*' which matches any sequence of characters.
 *
 * @param pattern The pattern to match against.
 * @param str The string to match.
 * @return TRUE if the string matches the pattern, FALSE otherwise.
 * 
 */
t_bool	ft_fnmatch(const char *pattern, const char *str)
{
	const char	*star = NULL;
	const char	*match = NULL;

	while (*str)
	{
		if (*pattern == '*')
		{
			star = pattern++;
			match = str;
		}
		else if (*pattern == '?' || *pattern == *str)
		{
			pattern++;
			str++;
		}
		else if (star)
		{
			pattern = star + 1;
			str = ++match;
		}
		else
			return (FALSE);
	}
	pattern = ft_skip_char(pattern, '*');
	return (!*pattern);
}
