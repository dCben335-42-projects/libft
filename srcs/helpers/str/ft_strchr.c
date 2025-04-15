/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:19:58 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/15 16:21:30 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * @brief Locates the first occurrence of a character in a string.
 *
 * @param s The string to search.
 * @param c The character to locate.
 * @return A pointer to the first occurrence of c in s, or NULL if not found.
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char) c)
		s++;
	if (*s == (char) c)
		return ((char *) s);
	return (NULL);
}
