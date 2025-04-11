/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 20:46:19 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/11 20:50:42 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Skips all occurrences of a given character in a string.
 *
 * @param str The string to search.
 * @param c The character to skip.
 * @return A pointer to the first character in the string that is not equal to c.
 */

const char	*ft_skip_char(const char *str, const char c)
{
	if (!str)
		return (NULL);
	while (*str && *str == c)
		str++;
	return (str);
}
