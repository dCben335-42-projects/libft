/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:44:07 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 19:31:17 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Counts the number of strings in a split array.
 *
 * @param split The split array to count.
 * @return The number of strings in the split array.
 */
int	ft_splitlen(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	return (i);
}
