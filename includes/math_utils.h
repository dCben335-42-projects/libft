/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 20:54:18 by bcabocel          #+#    #+#             */
/*   Updated: 2025/03/11 21:01:39 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_UTILS_H
# define MATH_UTILS_H

# include <stddef.h>

typedef enum e_sort
{
	ASC,
	DESC
}	t_sort;

unsigned long long	ft_abs(long long n);
long				ft_min(long a, long b);
long				ft_max(long a, long b);

#endif
