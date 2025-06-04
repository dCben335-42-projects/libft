/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:42:22 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/04 02:29:06 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tree.h"
#include "libft.h"

/**
 * @brief Adds a new node to the tree or updates an existing one.
 *
 * @param tree The tree to add the node to.
 * @param key The key of the node to add or update.
 * @param value The value of the node to add or update.
 * @return The added or updated node, or NULL if an error occurs.
 *
 * @note This function will either add a new node with the given key and value
 * 	or update the value of an existing node with the same key.
 */
t_tree	*add_existing_tree(t_tree *tree, char *key, void *value)
{
	t_tree_node	*matched;

	matched = get_tree_node(tree, key);
	if (!matched)
		return (NULL);
	if (matched->value_destroyer)
		matched->value_destroyer(matched->value);
	matched->value = value;
	return (matched);
}

/**
 * @brief Adds a new node to the tree.
 *
 * @param tree The tree to add the node to.
 * @param new The new node to add.
 * @return The added node, or NULL if an error occurs.
 *
 * @note This function adds the new node to the tree based on its key
 * 	and the comparison function provided in the tree.
 */
t_tree	*add_tree_node(t_tree **tree, t_tree_node *new)
{
	if (!new)
		return (NULL);
	if (!*tree)
	{
		*tree = new;
		return (new);
	}
	if ((*tree)->cmp(new->key, (*tree)->key) < 0)
		return (add_tree_node(&(*tree)->left, new));
	return (add_tree_node(&(*tree)->right, new));
}
