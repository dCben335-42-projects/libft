/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:31:02 by bcabocel          #+#    #+#             */
/*   Updated: 2025/03/11 20:19:31 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

t_bool	ft_isloweralpha(int c)
{
	return (c >= 'a' && c <= 'z');
}

t_bool	ft_isupperalpha(int c)
{
	return (c >= 'A' && c <= 'Z');
}

t_bool	ft_isalpha(int c)
{
	return (ft_isloweralpha(c) || ft_isupperalpha(c));
}
