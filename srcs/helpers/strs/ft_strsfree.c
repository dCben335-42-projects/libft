/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 02:43:27 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/04 02:44:43 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * 
 * @brief Frees an array of strings.
 *
 * @param strs The array of strings to free.
 * 
 * @return NULL.
 *
 * @note This function iterates through the array of strings, freeing each string
 * and then freeing the array itself. It returns NULL to indicate that the
 * memory has been freed.
 * 
*/
void	*ft_strsfree(char **strs)
{
	size_t	i;

	if (!strs)
		return (NULL);
	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}
