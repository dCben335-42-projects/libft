/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnegate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:29:17 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/10 01:09:04 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * 
 * @brief Converts characters in a string to their negative counterparts
 * based on a given charset.
 *
 * @param str Pointer to the string to be modified.
 * @param charset The set of characters to be converted to negative.
 *
 * @note This function modifies the original string in place.
 * 
 */
void	ft_strnegate(char **str, const char *charset)
{
	char	*ptr;

	if (!str || !charset)
		return ;
	ptr = *str;
	while (*ptr)
	{
		if (ft_isinclude(charset, *ptr))
			*ptr = -*ptr;
		ptr++;
	}
}
