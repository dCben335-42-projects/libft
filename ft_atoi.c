/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcben335 <dcben335@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:45:17 by bcabocel          #+#    #+#             */
/*   Updated: 2024/11/12 01:12:06 by dcben335         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if ((*str == '-') || (*str == '+'))
		if (*(str++) == '-')
			sign *= -1;
	while (ft_isdigit(*str))
		result = result * 10 + (*(str++) - 48);
	return (sign * result);
}
