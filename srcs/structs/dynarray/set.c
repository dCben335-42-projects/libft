/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:46:29 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/16 18:05:14 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dynarray.h"
#include "libft.h"
#include <stdio.h>

/**
 * 
 * @brief Reallocates the dynamic array to a new size.
 * 
 * @param arr The dynamic array to be reallocated.
 * @param new_size The new size for the dynamic array.
 * 
 * @return A pointer to the new data array, or NULL if memory allocation fails.
 * 
*/
static void	**realloc_dynarray(
	t_dynarray *arr,
	size_t new_size,
	t_bool destroy_on_fail
)
{
	void	**new;
	size_t	copy_size;

	new = ft_calloc((new_size + 1), sizeof(void *));
	if (!new && destroy_on_fail)
		return (destroy_dynarray(arr));
	else if (!new)
		return (NULL);
	if (arr->data)
	{
		if (new_size < arr->size)
			copy_size = new_size;
		else
			copy_size = arr->size;
		ft_memcpy(new, arr->data, copy_size * sizeof(void *));
		free(arr->data);
	}
	return (new);
}

/**
 * 
 * @brief Sets a value at the specified index in the dynamic array.
 * 
 * @param arr The dynamic array in which to set the value.
 * @param index The index at which to set the value.
 * @param value The value to set at the specified index.
 * 
 * @return A pointer to the value set at the specified index
 * or NULL if memory allocation fails.
 * 
 */
void	*set_dynarray_value(
	t_dynarray *arr,
	t_uint index,
	void *value,
	t_bool destroy_on_fail
)
{
	t_uint	new_size;
	void	**data;

	if (index >= arr->size)
	{
		new_size = arr->size * 2;
		while (new_size <= index)
			new_size = arr->size * 2;
		data = realloc_dynarray(arr, new_size, destroy_on_fail);
		if (!data)
			return (NULL);
		arr->data = data;
		arr->size = new_size;
	}
	arr->count++;
	arr->data[index] = value;
	if (index > (long)arr->last_index - 1)
		arr->last_index = index + 1;
	return (arr->data[index]);
}

/**
 * 
 * @brief Pushes a value onto the dynamic array.
 * 
 * @param arr The dynamic array to which the value will be pushed.
 * @param value The value to be pushed onto the dynamic array.
 * 
 * @note This function sets the new value behind the last index
 * and increments the last index.
 * 
 * @return A pointer to the pushed value, or NULL if memory allocation fails.
 * 
*/
void	*push(t_dynarray *arr, void *value, t_bool destroy_on_fail)
{
	if (!set_dynarray_value(arr, arr->last_index, value, destroy_on_fail))
		return (NULL);
	return (arr->data[arr->last_index - 1]);
}
