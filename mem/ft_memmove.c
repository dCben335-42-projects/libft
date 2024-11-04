/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:36:58 by bcabocel          #+#    #+#             */
/*   Updated: 2024/11/04 17:46:30 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*str_tmp;

	str_tmp = (void *)malloc((n) * sizeof(char));
	ft_memcpy(str_tmp, src, n);
	ft_memcpy(dest, str_tmp, n);
	return (dest);
}
