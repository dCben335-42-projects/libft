/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinbase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 22:37:46 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 19:43:59 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * @brief Checks if a character is present in a given base string.
 *
 * @param base The base string to check against.
 * @param c The character to check.
 * @return 1 (TRUE) if c is in the base, 0 (FALSE) otherwise.
 */
t_bool	ft_isinbase(char *base, char c)
{
	while (*base)
		if (c == *(base++))
			return (1);
	return (0);
}
