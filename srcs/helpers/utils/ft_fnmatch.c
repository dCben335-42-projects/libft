/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fnmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:06:27 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/04 02:26:54 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Matches a string against a pattern with wildcard support.
 * 
 * @param pattern The pattern to match against.
 * @param str The string to match.
 * 
 * @note The pattern characters need to be the negative ASCII values:
 * - `-?` matches any single character
 * - `-*` matches any sequence of characters
 *
 * @return TRUE if the string matches the pattern, FALSE otherwise.
 * 
 */
t_bool	ft_fnmatch(const char *pattern, const char *str)
{
	const char	*star = NULL;
	const char	*match = NULL;

	while (*str)
	{
		if (*pattern == - '*')
		{
			star = pattern++;
			match = str;
		}
		else if (*pattern == - '?' || *pattern == *str)
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
	pattern = ft_strskip(pattern, - '*');
	return (!*pattern);
}
