/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strskip.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 20:46:19 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/04 02:22:38 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Skips all occurrences of a given character in a string.
 *
 * @param str The string to search.
 * @param c The character to skip.
 * 
 * This function iterates through the string `str` and skips all characters
 * equal to `c`. It returns a pointer to the first character in the string
 * that is not equal to `c`. If the string is NULL, it returns NULL.
 * 
 * @return A pointer to the first character in the string that is not equal to c.
 */

const char	*ft_strskip(const char *str, const char c)
{
	if (!str)
		return (NULL);
	while (*str && *str == c)
		str++;
	return (str);
}
