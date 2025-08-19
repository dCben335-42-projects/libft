/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:03:03 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/10 00:13:40 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

/**
 * 
 * @brief Adds a new element at the end of the list.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address to the element to be added to the list.
 * 
 */
void	lst_add_back(t_lst **lst, t_lst *new)
{
	t_lst	*last;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = get_lst_last(*lst);
	last->next = new;
}

/**
 * 
 * @brief Adds a new element at the beginning of the list.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address to the element to be added to the list.
 * 
 */
void	lst_add_front(t_lst **lst, t_lst *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
