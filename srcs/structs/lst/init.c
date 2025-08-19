/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 22:38:55 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/10 00:13:40 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"
#include "stdlib.h"

/**
 * @brief Allocates (with malloc(3)) and returns a new element.
 *         The variable 'content' is initialized with the value of the parameter
 *         'content'. The variable 'next' is initialized to NULL.
 *
 * @param content The content to initialize the new element with.
 * @return A pointer to the new element or NULL if the allocation fails.
 */
t_lst	*init_lst(void *content)
{
	t_lst	*new;

	new = malloc(sizeof(t_lst));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
