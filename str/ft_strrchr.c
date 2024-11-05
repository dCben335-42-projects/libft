/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:53:49 by bcabocel          #+#    #+#             */
/*   Updated: 2024/11/05 15:06:18 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

char	*ft_strrchr(const char *s, int c)
{
    int best;
    int i;

    best = -1;
	while (*s && ++i)
		if (*(s++) == c)
			best = i;
    if (best == -1)
        return (0);
	return ((char *)s[best]);
}

int	main(void)
{
	char	str[10] = "Hello";

	printf("%s", ft_strrchr(str, 'c'));
}