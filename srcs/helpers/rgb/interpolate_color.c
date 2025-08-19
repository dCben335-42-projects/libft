/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpolate_color.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 18:13:04 by bcabocel          #+#    #+#             */
/*   Updated: 2025/08/19 18:15:11 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_rgb.h"

t_rgb	rgb_interpolate_color(t_rgb start, t_rgb end, float t)
{
	t_rgb	color;

	color.r = start.r + (end.r - start.r) * t;
	color.g = start.g + (end.g - start.g) * t;
	color.b = start.b + (end.b - start.b) * t;
	return (color);
}
