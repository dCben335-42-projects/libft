/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:19:36 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 19:39:25 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates and returns a substring from a given string.
 *
 * @param s The string to extract the substring from.
 * @param start The starting index of the substring.
 * @param len The length of the substring.
 * @return A pointer to the newly allocated substring. NULL if memory allocation
 *         fails or if s is NULL.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		s_len;
	char		*sub;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (s_len - start < len)
		len = s_len - start;
	sub = (char *) malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}
