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

#include "libft.h"

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while ((*str == '-') || (*str == '+'))
		if (*(str++) == '-') 
			sign *= -1;
	while (ft_isdigit(*str))
		result = result * 10 + (*str++ - 48);
	return (sign * result);
}

#include <stdio.h>
int main()
{
	char str[] = "----12345";
	printf("%d\n", ft_atoi(str));
	return 0;
}