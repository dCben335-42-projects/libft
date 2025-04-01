/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:28:01 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/01 19:42:16 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

/**
 * @brief Deletes and frees the given element and every successor of that
 *        element, using the function 'del' and free(3).
 *        Finally, the pointer to the list must be set to NULL.
 *
 * @param lst The address of a pointer to the element to be deleted.
 * @param del The address of the function used to delete the content.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
