/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strscat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:14:25 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 20:36:40 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenates an array of strings into a single string.
 *
 * @param dest The destination string to which the strings are concatenated.
 * @param strs The array of strings to concatenate.
 * @param count The number of strings in the array.
 * @param need_space If true, adds a space between each string except the last.
 */
void	ft_strscat(char *dest, const char **strs, size_t count, t_bool need_space)
{
	if (count == 0)
		return ;
	ft_strcat(dest, *strs);
	if (need_space && count > 1)
		ft_strcat(dest, " ");
	ft_strscat(dest, strs + 1, count - 1, need_space);
}
