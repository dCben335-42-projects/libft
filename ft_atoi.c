/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:45:17 by bcabocel          #+#    #+#             */
/*   Updated: 2024/11/06 13:59:51 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

static int	ft_iswhitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

static int	ft_isplussign(char c)
{
	return (c == '+');
}

static int	ft_isminussign(char c)
{
	return (c == '-');
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (ft_iswhitespace(*str))
		str++;
	while (ft_isminussign(*str) || ft_isplussign(*str))
		if (ft_isminussign(*(str++)))
			sign *= -1;
	while (ft_isdigit(*str))
		result = result * 10 + (*str++ - 48);
	return (sign * result);
}
