/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:31:02 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/10 00:12:45 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"

/**
 * @brief Checks if the given character is a lowercase letter.
 *
 * @param c The character to check.
 * @return 1 (TRUE) if c is a lowercase letter, 0 (FALSE) otherwise.
 */
t_bool	ft_isloweralpha(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * @brief Checks if the given character is an uppercase letter.
 *
 * @param c The character to check.
 * @return 1 (TRUE) if c is an uppercase letter, 0 (FALSE) otherwise.
 */
t_bool	ft_isupperalpha(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * @brief Checks if the given character is a letter 
 * 	(uppercase or lowercase).
 *
 * @param c The character to check.
 * @return 1 (TRUE) if c is a letter, 0 (FALSE) otherwise.
 */
t_bool	ft_isalpha(int c)
{
	return (ft_isloweralpha(c) || ft_isupperalpha(c));
}
