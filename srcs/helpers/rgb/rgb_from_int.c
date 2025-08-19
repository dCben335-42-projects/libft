/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgb_from_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 18:13:49 by bcabocel          #+#    #+#             */
/*   Updated: 2025/08/19 18:15:55 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_rgb.h"

t_rgb	rgb_from_int(unsigned int color)
{
	return (rgb((color >> 16) & 0xFF, (color >> 8) & 0xFF, color & 0xFF));
}
