/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:45:17 by bcabocel          #+#    #+#             */
/*   Updated: 2025/03/11 20:35:20 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol_base(const char *str, char *base)
{
	long	result;
	int		sign;
	size_t	base_len;

	result = 0;
	sign = 1;
	base_len = ft_strlen(base);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if ((*str == '-') || (*str == '+'))
		if (*(str++) == '-')
			sign *= -1;
	while (ft_isinbase(base, *str))
	{
		result = result * base_len + (ft_strchr(base, *str) - base);
		str++;
	}
	return (sign * result);
}

int	ft_atoi_base(const char *str, char *base)
{
	long	result;
	int		sign;
	size_t	base_len;

	result = 0;
	sign = 1;
	base_len = ft_strlen(base);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if ((*str == '-') || (*str == '+'))
		if (*(str++) == '-')
			sign *= -1;
	while (ft_isinbase(base, *str))
	{
		result = result * base_len + (ft_strchr(base, *str) - base);
		str++;
	}
	return (sign * result);
}
