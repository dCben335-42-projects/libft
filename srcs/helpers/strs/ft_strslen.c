/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strslen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:10:10 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/11 19:59:46 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of characters in each string in an array of strings.
 *
 * @param strs The array of strings to count.
 * @param count The number of strings in the array.
 * @param sep_len The length of the separator between each string.
 * 
 * @return The total length of all strings in the array.
 */
size_t	ft_strslen(const char **strs, size_t count, size_t sep_len)
{
	size_t	len;

	if (count == 0)
		return (0);
	len = ft_strlen(*strs);
	if (sep_len && count > 1)
		len += sep_len;
	return (len + ft_strslen(strs + 1, count - 1, sep_len));
}
