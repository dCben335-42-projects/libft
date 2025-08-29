/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 20:10:30 by bcabocel          #+#    #+#             */
/*   Updated: 2025/08/29 20:26:49 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_rgb.h"

t_rgb	rgb(unsigned char r, unsigned char g, unsigned char b)
{
	t_rgb		color;
	uint32_t	c32;
	uint64_t	c64;

	color.r = r;
	color.g = g;
	color.b = b;
	c32 = ((uint32_t)r << 16) | ((uint32_t)g << 8) | (uint32_t)b;
	c64 = ((uint64_t)c32 << 32) | c32;
	color.c32 = c32;
	color.c64 = c64;
	return (color);
}
