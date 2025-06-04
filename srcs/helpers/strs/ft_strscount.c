/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strscount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:57:46 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/05 19:57:55 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * 
 * @brief Counts the number of strings in a split array.
 *
 * @param split The split array to count.
 * 
 * @note The split array is expected to be NULL-terminated, meaning the last
 * element of the array is NULL. This function iterates through the array
 * until it encounters the NULL terminator, counting each non-NULL string.
 * 
 * @note This is useful for determining the number of elements in a dynamically
 * allocated array of strings, such as those created by the `ft_split` function.
 * 
 * @return The number of strings in the split array.
 * 
*/
size_t	ft_strscount(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
		i++;
	return (i);
}
