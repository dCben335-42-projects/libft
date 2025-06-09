/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 20:11:37 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/10 00:42:30 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_math.h"

static t_bool	ft_is_more(char *str, char *value, size_t value_len)
{
	size_t	len;

	if (*str == '-')
		return (FALSE);
	if (*str == '+')
		str++;
	len = ft_strlen(str);
	if (len > value_len
		|| (len == value_len && ft_strncmp(str, value, len) > 0))
		return (TRUE);
	return (FALSE);
}

static t_bool	ft_is_less(char *str, char *value, size_t value_len)
{
	size_t	len;

	if (*str != '-')
		return (FALSE);
	len = ft_strlen(str);
	if (len > value_len
		|| (len == value_len && ft_strncmp(str, value, len) > 0))
		return (TRUE);
	return (FALSE);
}

static	t_bool	is_valid_int(char *str)
{
	if (!str)
		return (FALSE);
	if (ft_is_more(str, INT_MAX_STR, INT_MAX_LEN)
		|| ft_is_less(str, INT_MIN_STR, INT_MIN_LEN))
		return (FALSE);
	if (*str == '-' || *str == '+')
		str++;
	if (!*str)
		return (FALSE);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (FALSE);
		str++;
	}
	return (TRUE);
}

static	t_bool	is_valid_long(char *str)
{
	if (!str)
		return (FALSE);
	if (ft_is_more(str, LONG_MAX_STR, LONG_MAX_LEN)
		|| ft_is_less(str, LONG_MIN_STR, LONG_MIN_LEN))
		return (FALSE);
	if (*str == '-' || *str == '+')
		str++;
	if (!*str)
		return (FALSE);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (FALSE);
		str++;
	}
	return (TRUE);
}

/**
 * 
 * @brief Checks if the given string represents a valid number.
 *
 * @param str The string to check.
 * @param is_long If true, checks for long numbers;
 * 		otherwise, checks for int numbers.
 * 
 * @return 1 (TRUE) if str is a valid number, 0 (FALSE) otherwise.
 * 
 */
t_bool	ft_isnumber(char *str, t_bool is_long)
{
	if (is_long)
		return (is_valid_long(str));
	return (is_valid_int(str));
}
