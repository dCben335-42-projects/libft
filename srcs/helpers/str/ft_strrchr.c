/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:53:49 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 19:39:05 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the last occurrence of a character in a string.
 *
 * @param s The string to search in.
 * @param c The character to locate.
 * @return A pointer to the last occurrence of c in s, or NULL if not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	int		s_len;

	s_len = (int) ft_strlen(s);
	while (s_len >= 0)
	{
		if (s[s_len] == (char)c)
			return ((char *) s + s_len);
		s_len--;
	}
	return (NULL);
}
