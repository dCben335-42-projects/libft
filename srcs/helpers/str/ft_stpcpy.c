/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stpcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:20:13 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/15 16:56:42 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * @brief Copies a string to a destination buffer and returns a pointer to the
 *        end of the copied string.
 *
 * @param dest The destination buffer.
 * @param src The source string to copy.
 * @return A pointer to the end of the copied string in dest.
 * 
 * @note The returned pointer can't be used to free the memory since it points
 * 	to the end of the copied string, not the start of the allocated memory.
 * 	Make sure to allocate enough memory for dest before using this function.
 */
char	*ft_stpcpy(char *dest, const char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
