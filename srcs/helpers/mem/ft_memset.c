/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:38:25 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 19:41:29 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

/**
 * @brief Fills the first n bytes of the memory area pointed to by s with the
 *        constant byte c.
 *
 * @param s The pointer to the memory area to fill.
 * @param c The byte to fill with.
 * @param n The number of bytes to fill.
 * @return A pointer to the memory area s.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	chr;

	tmp = (unsigned char *) s;
	chr = (unsigned char) c;
	while (n--)
		*(tmp++) = chr;
	return (s);
}
