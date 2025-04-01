/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:52:08 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 19:43:49 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * @brief Checks if the given character is an ASCII character.
 *
 * @param c The character to check.
 * @return 1 (TRUE) if c is an ASCII character, 0 (FALSE) otherwise.
 */
t_bool	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
