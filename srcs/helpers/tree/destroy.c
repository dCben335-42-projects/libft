/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:46:41 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/15 17:17:43 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tree.h"
#include "libft.h"

static void	*free_tree_node(t_tree *tree)
{
	free(tree->key);
	if (tree->value_destroyer)
		tree->value_destroyer(tree->value);
	free(tree);
	return (NULL);
}

static void	bind_rightmost(t_tree_node *replacement, t_tree *right_subtree)
{
	t_tree	*temp;

	if (!replacement || !right_subtree || right_subtree == replacement)
		return ;
	temp = replacement;
	while (temp->right)
		temp = temp->right;
	temp->right = right_subtree;
}

/**
 * @brief Destroys a tree node and frees its memory.
 *
 * @param tree The tree to modify.
 * @param node The node to destroy.
 * @return NULL
 *
 * @note This function removes the node from the tree and frees its memory.
 * 
 * @note It also rebinds remaining nodes to the parent node. (if any)
 */
void	*destroy_tree_node(t_tree **tree, t_tree_node *node)
{
	t_tree_node	*replacement;
	t_tree_node	*parent;

	if (!tree || !node)
		return (NULL);
	parent = get_tree_parent(*tree, node);
	if (node->left)
		replacement = node->left;
	else
		replacement = node->right;
	if (!parent)
		*tree = replacement;
	else if (parent->left == node)
		parent->left = replacement;
	else
		parent->right = replacement;
	bind_rightmost(replacement, node->right);
	return (free_tree_node(node));
}

/**
 * @brief Destroys the entire tree and frees its memory.
 *
 * @param tree The tree to destroy.
 * @return NULL
 *
 * @note This function recursively destroys all nodes in the tree.
 */
void	*destroy_tree(t_tree *tree)
{
	if (!tree)
		return (NULL);
	destroy_tree(tree->left);
	destroy_tree(tree->right);
	return (free_tree_node(tree));
}
