/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:29:56 by bcabocel          #+#    #+#             */
/*   Updated: 2025/08/19 18:24:47 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"
#include "stdlib.h"

/**
 * @brief Iterates the list 'lst' and applies the function 'f' to the content
 *        of each element, creating a new list with the results.
 *        If the allocation fails, the function deletes the new list using 'del'.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param f The address of the function used to iterate on the list.
 * @param del The address of the function used to delete the content.
 * @return The new list or NULL if the allocation fails.
 */
t_lst	*ft_lstmap(t_lst *lst, void *(*f)(void *), void (*del)(void *))
{
	t_lst	*new;
	t_lst	*tmp;
	void	*content;

	if (!f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		tmp = init_lst(content);
		if (!tmp)
		{
			del(content);
			destroy_lst(&new, del);
			return (NULL);
		}
		lst_add_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
