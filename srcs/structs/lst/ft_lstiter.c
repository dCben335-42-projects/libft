/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:29:15 by bcabocel          #+#    #+#             */
/*   Updated: 2025/08/19 18:24:47 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

/**
 * @brief Iterates the list 'lst' and applies the function 'f' to the content
 *        of each element.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param f The address of the function used to iterate on the list.
 */
void	ft_lstiter(t_lst *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
