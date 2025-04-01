/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 22:43:22 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 19:43:04 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

/**
 * @brief Counts the number of elements in a list.
 *
 * @param lst The beginning of the list.
 * @return The number of elements in the list.
 */
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
