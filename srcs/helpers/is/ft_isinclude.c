/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinclude.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:44:41 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/10 00:44:53 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * 
 * @brief Checks if a character is included in a given charset.
 *
 * @param charset The string containing the characters to check against.
 * @param c The character to check for inclusion in the charset.
 * 
 * @return TRUE if the character is found in the charset, FALSE otherwise.
 * 
 */
t_bool	ft_isinclude(const char *charset, char c)
{
	while (*charset)
	{
		if (*charset == c)
			return (TRUE);
		charset++;
	}
	return (FALSE);
}
