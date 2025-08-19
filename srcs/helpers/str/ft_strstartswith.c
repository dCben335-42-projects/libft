/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstartswith.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 18:10:12 by bcabocel          #+#    #+#             */
/*   Updated: 2025/08/19 18:10:23 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_strstartswith(const char *str, const char *prefix)
{
	const size_t	str_len = ft_strlen(str);
	const size_t	prefix_len = ft_strlen(prefix);

	if (prefix_len > str_len)
		return (FALSE);
	return (ft_strncmp(str, prefix, prefix_len) == 0);
}
