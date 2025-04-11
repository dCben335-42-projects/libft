/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsaddsuffix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 20:07:16 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/11 20:08:41 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a suffix to each string in the array.
 *
 * @param suffix The suffix to add.
 * @param content The array of strings.
 * @return The modified array of strings with the suffix added.
 * 	NULL if memory allocation fails.
 * 
 * @note This function modifies the original strings in the array.
 */
char	**ft_strsaddsuffix(const char *suffix, char **content)
{
	char	*tmp;
	size_t	i;

	i = 0;
	while (content[i])
	{
		tmp = ft_strjoin(content[i], suffix);
		if (!tmp)
			return (NULL);
		free(content[i]);
		content[i] = tmp;
		i++;
	}
	return (content);
}
