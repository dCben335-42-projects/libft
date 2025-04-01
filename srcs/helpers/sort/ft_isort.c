/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:23:48 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 19:54:18 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_isort_generic(
	char **array,
	size_t count,
	int (*cmp)(const char *, const char *),
	int reverse
)
{
	char	*key;
	size_t	i;
	ssize_t	j;

	i = 1;
	while (i < count)
	{
		key = array[i];
		j = i - 1;
		while (j >= 0 && ((cmp(array[j], key) * reverse) > 0))
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = key;
		i++;
	}
}

/**
 * @brief Sorts an array of strings using insertion sort.
 *
 * @param array The array of strings to sort.
 * @param count The number of elements in the array.
 * @param cmp The comparison function to use for sorting.
 * @param is_reverse If true, sorts in reverse order.
 */
void	ft_isort(
	char **array,
	size_t count,
	int (*cmp)(const char *, const char *),
	t_bool is_reverse
)
{
	int	reverse;

	if (is_reverse)
		reverse = -1;
	else
		reverse = 1;
	ft_isort_generic(array, count, cmp, reverse);
}
