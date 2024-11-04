/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:38:25 by bcabocel          #+#    #+#             */
/*   Updated: 2024/11/04 15:00:57 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *tmp;

    tmp = (unsigned char *)s;
    while (n)
    {
        *(tmp++) = (unsigned char) c;
        n--;
    }
    return s;
}