/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:28:01 by bcabocel          #+#    #+#             */
/*   Updated: 2025/08/19 18:24:47 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"
#include <stdlib.h>

/**
 * 
 * @brief Deletes and frees the given element and every successor of that
 * element, using the function 'del' and free(3). Finally, the pointer to 
 * the list will be set to NULL.
 *
 * @param lst The address of a pointer to the element to be deleted.
 * @param del The address of the function used to delete the content.
 * 
 */
void	*destroy_lst(t_lst **lst, void (*del)(void *))
{
	t_lst	*tmp;

	if (!lst || !del)
		return (NULL);
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	return (NULL);
}
