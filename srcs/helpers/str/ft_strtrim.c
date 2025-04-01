/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:41:04 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 19:39:09 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates and returns a copy of the string s1 with leading and
 *        trailing characters specified in set removed.
 *
 * @param s1 The string to trim.
 * @param set The characters to remove from the beginning and end of s1.
 * @return A pointer to the newly allocated trimmed string. NULL if memory
 *         allocation fails or if s1 is NULL.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim = (char *) malloc((end - start + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, &s1[start], end - start + 1);
	return (trim);
}
