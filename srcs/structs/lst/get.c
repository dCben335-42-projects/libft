/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 18:23:12 by bcabocel          #+#    #+#             */
/*   Updated: 2025/08/19 18:24:47 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"
#include "stdlib.h"

/**
 * 
 * @brief Returns the last element of the list.
 *
 * @param lst The beginning of the list.
 * @return The last element of the list.
 * 
 */
t_lst	*get_lst_last(t_lst *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/**
 * 
 * @brief Counts the number of elements in a list.
 *
 * @param lst The beginning of the list.
 * @return The number of elements in the list.
 * 
 */
int	get_lst_size(t_lst *lst)
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
