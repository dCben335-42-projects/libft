/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:42:18 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/10 00:12:45 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"

/**
 * @brief Checks if the given character is a digit (0-9).
 *
 * @param c The character to check.
 * @return 1 (TRUE) if c is a digit, 0 (FALSE) otherwise.
 */
t_bool	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
