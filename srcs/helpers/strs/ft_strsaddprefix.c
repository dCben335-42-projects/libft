/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsaddprefix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 20:07:56 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/11 20:08:19 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a prefix to each string in the array.
 *
 * @param prefix The prefix to add.
 * @param content The array of strings.
 * @return The modified array of strings with the prefix added.
 * 	NULL if memory allocation fails.
 * 
 * @note This function modifies the original strings in the array.
 */
char	**ft_strsaddprefix(const char *prefix, char **content)
{
	char	*tmp;
	size_t	i;

	i = 0;
	while (content[i])
	{
		tmp = ft_strjoin(prefix, content[i]);
		if (!tmp)
			return (NULL);
		free(content[i]);
		content[i] = tmp;
		i++;
	}
	return (content);
}
