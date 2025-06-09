/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:44:49 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/15 17:16:13 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tree.h"
#include "libft.h"

/**
 * @brief Calculates the size of the tree.
 *
 * @param tree The tree to measure.
 * @return The size of the tree.
 */
size_t	get_size_tree(t_tree *tree)
{
	if (!tree)
		return (0);
	return (1 + get_size_tree(tree->left) + get_size_tree(tree->right));
}

/**
 * @brief Gets the parent of a tree node.
 *
 * @param tree The tree to search in.
 * @param node The node whose parent is to be found.
 * @return The parent node, or NULL if not found.
 */
t_tree_node	*get_tree_parent(t_tree *tree, t_tree_node *node)
{
	t_tree	*parent;

	if (!tree || !node)
		return (NULL);
	if (tree->left == node || tree->right == node)
		return (tree);
	parent = get_tree_parent(tree->left, node);
	if (parent)
		return (parent);
	return (get_tree_parent(tree->right, node));
}

/**
 * @brief Gets a tree node by its key.
 *
 * @param tree The tree to search in.
 * @param key The key of the node to find.
 * @return The found node, or NULL if not found.
 */
t_tree_node	*get_tree_node(t_tree *tree, char *key)
{
	if (!tree || !key)
		return (NULL);
	if (tree->cmp(key, tree->key) == 0)
		return (tree);
	if (tree->cmp(key, tree->key) < 0)
		return (get_tree_node(tree->left, key));
	return (get_tree_node(tree->right, key));
}
