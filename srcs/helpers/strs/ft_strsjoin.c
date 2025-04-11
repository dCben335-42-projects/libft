/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:12:14 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/11 20:06:48 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Joins an array of strings 
 * 		into a single string with optional spaces between them.
 *
 * @param strs The array of strings to join.
 * @param count The number of strings in the array.
 * @param sep The separator to use between strings.
 * @return A pointer to the newly allocated string.
 * 		NULL if memory allocation fails.
 */
char	*ft_strsjoin(const char **strs, size_t count, const char *sep)
{
	char	*result;
	size_t	sep_len;

	sep_len = 0;
	if (sep)
		sep_len = ft_strlen(sep);
	result = malloc(ft_strslen(strs, count, sep_len) + 1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	ft_strscat(result, strs, count, sep);
	return (result);
}
