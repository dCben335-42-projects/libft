/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:24:51 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/15 17:15:28 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tree.h"
#include "libft.h"

/**
 * @brief Initializes a new tree node with the given key, value, and comparison
 *        function.
 *
 * @param key The key of the node.
 * @param value The value of the node.
 * @param cmp The comparison function for the key.
 * @param value_destroyer The function to destroy the value.
 * @return A pointer to the initialized tree node, or NULL if an error occurs.
 * 
 * @note The key must be a non-null string, and the comparison function must 
 * 	be provided and should be the same for all nodes in the tree.
 * 	
 * @note The value can even be NULL and the value_destroyer function is optional.
 * 
 * @note The caller is responsible for freeing the memory allocated for the
 */
t_tree_node	*init_tree_node(
	char *key,
	void *value,
	int (*cmp)(const char *, const char *),
	void *(*value_destroyer)(void *)
)
{
	t_tree_node	*node;

	if (!cmp || !key)
		return (NULL);
	node = malloc(sizeof(t_tree));
	if (!node)
		return (NULL);
	node->left = NULL;
	node->right = NULL;
	node->key = key;
	node->value = value;
	node->value_destroyer = value_destroyer;
	node->cmp = cmp;
	return (node);
}
