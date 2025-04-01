/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strslen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:10:10 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 20:19:20 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of characters in each string in an array of strings.
 *
 * @param strs The array of strings to count.
 * @param count The number of strings in the array.
 * @param need_space If true, 
 * 		adds 1 to the length for each string except the last.
 * 
 * @return The total length of all strings in the array.
 */
size_t	ft_strslen(const char **strs, size_t count, t_bool need_space)
{
	size_t	len;

	if (count == 0)
		return (0);
	len = ft_strlen(*strs);
	if (need_space && count > 1)
		len += 1;
	return (len + ft_strslen(strs + 1, count - 1, need_space));
}
