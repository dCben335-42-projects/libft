/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:25:27 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 19:39:02 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of a substring in a string, up to a
 *        specified length.
 *
 * @param big The string to search in.
 * @param little The substring to search for.
 * @param len The maximum length to search.
 * @return A pointer to the beginning of the located substring, or NULL if not
 *         found.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	if (!*little)
		return ((char *) big);
	little_len = ft_strlen(little);
	i = 0;
	while (big[i] && i < len)
	{
		if (i + little_len <= len && !ft_strncmp(&big[i], little, little_len))
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
