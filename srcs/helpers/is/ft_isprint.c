/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:12:14 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/10 00:12:45 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"

/**
 * @brief Checks if the given character is a printable ASCII character.
 *
 * @param c The character to check.
 * @return 1 (TRUE) if c is a printable ASCII character, 0 (FALSE) otherwise.
 */
t_bool	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
