/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:43:08 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 19:40:48 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of a character in a block of memory.
 *
 * @param ptr The pointer to the block of memory.
 * @param ch The character to locate.
 * @param count The number of bytes to search.
 * @return A pointer to the first occurrence of ch in ptr, or NULL if not found.
 */
void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	const unsigned char	*p = ptr;
	const unsigned char	c = (unsigned char)	ch;

	while (count--)
	{
		if (*p == c)
			return ((void *) p);
		p++;
	}
	return (NULL);
}
