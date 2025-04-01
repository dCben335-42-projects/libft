/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:12:14 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 20:36:47 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Joins an array of strings 
 * 		into a single string with optional spaces between them.
 *
 * @param strs The array of strings to join.
 * @param count The number of strings in the array.
 * @param need_space If true, adds a space between each string except the last.
 * @return A pointer to the newly allocated string.
 * 		NULL if memory allocation fails.
 */
char	*ft_strsjoin(const char **strs, size_t count, t_bool need_space)
{
	char	*result;

	result = malloc(ft_strslen(strs, count, need_space) + 1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	ft_strscat(result, strs, count, need_space);
	return (result);
}
