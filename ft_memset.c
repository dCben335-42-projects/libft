/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:38:25 by bcabocel          #+#    #+#             */
/*   Updated: 2024/11/06 12:31:40 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include "stdlib.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char 	chr;

	tmp = (unsigned char *)s;
	chr = (unsigned char)c;
	while (n--)
		*(tmp++) = chr;
	return (s);
}

#include "stdio.h"

int main()
{
	char str[13] = "test de merde";
	
	ft_memset(str, 'c', 3); 
	printf("%s", str);
}
