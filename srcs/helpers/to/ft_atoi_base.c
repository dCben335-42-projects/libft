/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:45:17 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 19:51:24 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_atoi_base_helper(const char *str, char *base, int *sign)
{
	long	result;
	size_t	base_len;

	result = 0;
	base_len = ft_strlen(base);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if ((*str == '-') || (*str == '+'))
		if (*(str++) == '-')
			*sign *= -1;
	while (ft_isinbase(base, *str))
	{
		result = result * base_len + (ft_strchr(base, *str) - base);
		str++;
	}
	return (result);
}

/**
 * @brief Converts a string to an integer using a specified base.
 *
 * @param str The string to convert.
 * @param base The base to use for conversion 
 * 		(e.g., "0123456789ABCDEF" for hexadecimal).
 * @return The converted integer as a long.
 *         Returns 0 if the string is not a valid number in the specified base.
 */
long	ft_atol_base(const char *str, char *base)
{
	int	sign;

	sign = 1;
	return (sign * ft_atoi_base_helper(str, base, &sign));
}

/**
 * @brief Converts a string to an integer using a specified base.
 *
 * @param str The string to convert.
 * @param base The base to use for conversion
 * 		(e.g., "0123456789ABCDEF" for hexadecimal).
 * @return The converted integer.
 *         Returns 0 if the string is not a valid number in the specified base.
 */
int	ft_atoi_base(const char *str, char *base)
{
	int	sign;

	sign = 1;
	return ((int)(sign * ft_atoi_base_helper(str, base, &sign)));
}
