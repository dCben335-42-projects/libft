/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:48:55 by bcabocel          #+#    #+#             */
/*   Updated: 2025/08/19 18:39:50 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dynarray.h"

/**
 * 
 * @brief Frees the value then returns NULL.
 * 
 * @param data The data to be freed.
 * 
 * @return NULL
 * 
*/
void	*free_from_ptr(void *data)
{
	free(data);
	return (NULL);
}

/**
 * 
 * @brief Destroys a dynamic array and its contents.
 * 
 * @param arr The dynamic array to be destroyed.
 * 
 * @note Use the destroyer function to free the contents of the array.
 * 
 * @return NULL
 * 
*/
void	*destroy_dynarray(t_dynarray *arr)
{
	t_uint	i;

	i = 0;
	if (arr->destroyer)
	{
		while (i < arr->size)
		{
			if (arr->data[i])
				arr->destroyer(arr->data[i]);
			i++;
		}
	}
	free(arr->data);
	arr->data = NULL;
	arr->size = 0;
	arr->count = 0;
	arr->last_index = 0;
	arr->destroyer = NULL;
	if (arr->is_malloc)
		free(arr);
	return (NULL);
}
