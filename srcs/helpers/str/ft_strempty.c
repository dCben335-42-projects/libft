/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strempty.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 18:09:20 by bcabocel          #+#    #+#             */
/*   Updated: 2025/08/19 18:09:32 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_strempty(const char *line)
{
	while (*line)
	{
		if (!ft_isspace(*line))
			return (FALSE);
		line++;
	}
	return (TRUE);
}
