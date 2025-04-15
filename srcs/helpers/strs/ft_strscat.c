/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strscat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:14:25 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/15 16:24:40 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenates an array of strings into a single string.
 *
 * @param dest The destination string to which the strings are concatenated.
 * @param strs The array of strings to concatenate.
 * @param count The number of strings in the array.
 * @param sep The separator to use between strings.
 * 
 * @note This function is recursive and will concatenate the strings into the
 *      destination string. The destination string must be large enough to
 * 	  	hold the concatenated result.
 */
void	ft_strscat(char *dest, const char **strs, size_t count, const char *sep)
{
	if (count == 0)
		return ;
	dest = ft_stpcpy(dest, *strs);
	if (sep && count > 1)
		dest = ft_stpcpy(dest, sep);
	ft_strscat(dest, strs + 1, count - 1, sep);
}
