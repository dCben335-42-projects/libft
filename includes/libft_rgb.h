/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_rgb.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:51:36 by bcabocel          #+#    #+#             */
/*   Updated: 2025/08/19 18:16:38 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_RGB_H
# define LIBFT_RGB_H

typedef struct s_rgb
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
}	t_rgb;

t_rgb			rgb(unsigned char r, unsigned char g, unsigned char b);
t_rgb			rgb_interpolate_color(t_rgb start, t_rgb end, float t);
t_rgb			rgb_from_int(unsigned int color);
unsigned int	rgb_to_uint(t_rgb color);

#endif