/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 20:18:10 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/10 00:12:45 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"

/**
 * @brief Checks if the given character is a whitespace character
 *  	  (space, tab, newline, vertical tab, form feed, or carriage return).
 *
 * @param c The character to check.
 * @return 1 (TRUE) if c is a whitespace character, 0 (FALSE) otherwise.
 */
t_bool	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}
