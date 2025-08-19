/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strendwith.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 18:09:45 by bcabocel          #+#    #+#             */
/*   Updated: 2025/08/19 18:10:01 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_strendwith(const char *str, const char *suffix)
{
	const size_t	str_len = ft_strlen(str);
	const size_t	suffix_len = ft_strlen(suffix);

	if (suffix_len > str_len)
		return (FALSE);
	return (ft_strncmp(str + str_len - suffix_len, suffix, suffix_len) == 0);
}
