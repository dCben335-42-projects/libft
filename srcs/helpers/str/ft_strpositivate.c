/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpositivate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:34:53 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/10 00:38:18 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * 
 * @brief Converts characters in a string to their positive counterparts
 * based on a given charset.
 *
 * @param str Pointer to the string to be modified.
 * @param charset The set of characters to be converted to positive.
 * 
 * @note This function modifies the original string in place.
 * 
 */
void	ft_strpositivate(char **str, const char *charset)
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
